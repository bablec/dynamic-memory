#include <iostream>
#include "sampler.h"

const int SIZE = 20;

int main() {
    Sampler sample(SIZE);
    for (int i=0;i<SIZE;i++)
        std::cout << sample.getSample() << std::endl;
    return 0;
}