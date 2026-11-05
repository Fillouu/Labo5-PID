#include "SharedValue.h"

float SharedValue::read()
{
    mutex.take();
    float resultat = valeur;
    mutex.release();

    return resultat;
}

void SharedValue::write(float nouvelleValeur)
{
    mutex.take();
    valeur = nouvelleValeur;
    mutex.release();
}