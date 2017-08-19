//
// Created by Дмитрий on 19.08.17.
//

#include "DateGenerator.h"
#include <string>
#include "Date.h"

Date::Date() {

}

std::string Date::Generate() {
    int year = this->mDateGenerator.GenerateYear();
    int month = this->mDateGenerator.GenerateMonth(year);
    int day = this->mDateGenerator.GenerateDay(year, month);

    if(isWeekEnd(day, month, year)) {
        return Generate();
    } else {

        std::string delimeter = ".";
        std::string yearString = std::to_string(year);
        std::string monthString = getMonthString(month);
        std::string dayString = getDayString(day);

        std::string date = dayString + delimeter + monthString + delimeter + yearString;

        return date;
    }
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


int Date::DayOfWeek(int day, int month, int year){
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

bool Date::isWeekEnd(int day, int month, int year) {
    int dayOfWeeek = this->DayOfWeek(day, month, year);
    return ((dayOfWeeek == 0) || (dayOfWeeek == 6));
}