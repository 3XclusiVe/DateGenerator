//
// Created by Дмитрий on 20.08.17.
//

#ifndef DATEGENERATOR_TESTDATEGENERATOR_H
#define DATEGENERATOR_TESTDATEGENERATOR_H

#include "DateGenerator.h"

class TestDateGenerator : public DateGenerator {

public:
    TestDateGenerator();
    void TestMaxDayInFebruaryWhenYearIsLeap();
    void TestMaxDayInFebruary();
    void TestMaxDayinMonths();
};


#endif //DATEGENERATOR_TESTDATEGENERATOR_H
