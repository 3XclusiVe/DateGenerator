//
// Created by Дмитрий on 19.08.17.
//

#ifndef DATEGENERATOR_DATE_H
#define DATEGENERATOR_DATE_H


#include "DateGenerator.h"

class Date {

private:
    DateGenerator mDateGenerator = DateGenerator();

public:
    Date();
    std::string Generate();

private:
    std::string getMonthString(int month);
    std::string getDayString(int day);

};


#endif //DATEGENERATOR_DATE_H
