//
// Created by Дмитрий on 19.08.17.
//

#ifndef DATEGENERATOR_DATEGENERATOR_H
#define DATEGENERATOR_DATEGENERATOR_H


#include "Random.h"

class DateGenerator  {

protected:
    Random* mRandom;

public:
    DateGenerator();
    ~DateGenerator();
    int GenerateYear();
    int GenerateMonth();
    int GenerateDay(int year, int month);

private:
    int getCurrentYear();
    bool isLong(int month);
    bool isLeapYear(int year);
};


#endif //DATEGENERATOR_DATEGENERATOR_H
