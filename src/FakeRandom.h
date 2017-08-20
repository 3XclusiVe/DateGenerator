//
// Created by Дмитрий on 20.08.17.
//

#ifndef DATEGENERATOR_FAKERANDOM_H
#define DATEGENERATOR_FAKERANDOM_H


#include "Random.h"

class FakeRandom : public Random{
public:
    virtual int Range(int min, int max);
};


#endif //DATEGENERATOR_FAKERANDOM_H
