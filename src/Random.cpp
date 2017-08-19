//
// Created by Дмитрий on 19.08.17.
//

#include <random>
#include "Random.h"

int Random::Range(int min, int max) {

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(min, max);

    int random_integer = uni(rng);
    return random_integer;
}

