//
// Created by Дмитрий on 19.08.17.
//

#include <ctime>
#include "DateGenerator.h"

int DateGenerator::GenerateYear() {

    int maxYear = 2100;
    int currentYear = getCurrentYear();
    int randomYear = mRandom->Range(currentYear, maxYear);

    return randomYear;

}

int DateGenerator::GenerateMonth() {
    int minMonth = 1;
    int maxMonth = 12;
    int randomMonth = mRandom->Range(minMonth, maxMonth);
    return randomMonth;
}

int DateGenerator::GenerateDay(int year, int month) {
    int minDay = 1;
    int maxDay = 30;

    if (isLong(month)) {
        maxDay = 31;
    }

    if(month == 2) {
        maxDay = 28;
        if(isLeapYear(year)) {
            maxDay = 29;
        }
    }

    int randomDay = mRandom->Range(minDay, maxDay);

    return randomDay;
}

int DateGenerator::getCurrentYear() {
    time_t t = time(0);
    struct tm *now = localtime(&t);
    return now->tm_year + 1900;
}

bool DateGenerator::isLong(int month) {
    if (month == 1 ||
        month == 3 ||
        month == 5 ||
        month == 7 ||
        month == 8 ||
        month == 10 ||
        month == 12) {
        return true;
    }
    return false;
}

bool DateGenerator::isLeapYear(int year) {
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

DateGenerator::DateGenerator() {
    this->mRandom = new Random();
}

DateGenerator::~DateGenerator() {
    delete this->mRandom;
}










