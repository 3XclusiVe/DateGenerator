//
// Created by Дмитрий on 19.08.17.
//

#include <string>
#include "Date.h"

Date::Date() {

}

std::string Date::Generate() {
    int year = this->mDateGenerator.GenerateYear();
    int month = this->mDateGenerator.GenerateMonth();
    int day = this->mDateGenerator.GenerateDay(year, month);

    std::string delimeter = ".";
    std::string yearString = std::to_string(year);
    std::string monthString = std::to_string(month);
    std::string dayString = std::to_string(day);

    std::string date = dayString + delimeter + monthString + delimeter + yearString;

    return date;
}



