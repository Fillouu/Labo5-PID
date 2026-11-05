// Mutex.cpp : un wrapper du mutex de pthreads, rien de plus.
#include "Mutex.h"

Mutex::Mutex() {
    pthread_mutex_init(&mutex, NULL);
}

Mutex::~Mutex() {
    pthread_mutex_destroy(&mutex);
}

void Mutex::take() {
    pthread_mutex_lock(&mutex);
}

void Mutex::release() {
    pthread_mutex_unlock(&mutex);
}
