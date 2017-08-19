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
    std::string monthString = getMonthString(month);
    std::string dayString = getDayString(day);

    std::string date = dayString + delimeter + monthString + delimeter + yearString;

    return date;
}

std::string Date::getMonthString(int month) {
    std::string monthString = std::to_string(month);
    if(monthString.size() < 2) {
        monthString = "0" + monthString;
    }
    return monthString;
}

std::string Date::getDayString(int day) {
    std::string dayString = std::to_string(day);
    if(dayString.size() < 2) {
        dayString = "0" + dayString;
    }
    return dayString;
}







