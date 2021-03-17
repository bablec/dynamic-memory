#include "sampler.h"
#include <random>
#include <ctime>

Sampler::Sampler(int n) {
    array = new int[n];
    for (int i=0;i<n;i++)
        array[i] = i;
    size = n;
}

Sampler::~Sampler() {
    delete[] array;
}

int Sampler::getSample() {
    srand(time(NULL));
    int i = rand() % size;
    int e = array[i];
    size--;
    array[i] = array[size];

    return e;
}