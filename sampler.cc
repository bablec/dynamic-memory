#include "sampler.h"
#include <random>

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
    int i = rand();
    int e = array[i];
    size--;
    array[i] = array[size];

    return e;
}