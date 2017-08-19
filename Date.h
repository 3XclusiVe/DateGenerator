//
// Created by Дмитрий on 19.08.17.
//

#ifndef DATEGENERATOR_DATE_H
#define DATEGENERATOR_DATE_H


#include "DateGenerator.h"

class Date {

protected:
    DateGenerator mDateGenerator = DateGenerator();

public:
    Date();
    std::string Generate();

};


#endif //DATEGENERATOR_DATE_H
