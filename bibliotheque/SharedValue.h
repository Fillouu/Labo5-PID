#ifndef SHAREDVALUE_H
#define SHAREDVALUE_H

#include "Mutex.h"

class SharedValue
{
private:
    float valeur = 0.0f;
    Mutex mutex;

public:
    float read();
    void write(float nouvelleValeur);
};

#endif