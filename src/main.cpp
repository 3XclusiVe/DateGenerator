#include <iostream>
#include <random>
#include <thread>
#include "Date.h"
#include "TestDateGenerator.h"

bool isWeekEnd(std::string &date) {
    int day, month, year;
    sscanf(date.c_str(), "%2d.%2d.%4d",
           &day,
           &month,
           &year);

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    int weekDay = ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;

    return ((weekDay == 0) || (weekDay == 6));
}


int main() {

    //Как использовать
    Date DateGenerator = Date();
    std::string date = DateGenerator.Generate();

    //Тесты
    TestDateGenerator testDateGenerator = TestDateGenerator();
    testDateGenerator.TestMaxDayInFebruary();
    testDateGenerator.TestMaxDayInFebruaryWhenYearIsLeap();
    testDateGenerator.TestMaxDayinMonths();

    while (true) {
        //Генерация случайной даты
        Date DateGenerator = Date();
        date = DateGenerator.Generate();

        //Вывод на экран строки даты и проверки являюется ли дата выходным (только тест)
        std::cout << date  << " "<< isWeekEnd(date) << std::endl;
        //пауза 500 мс
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}

