#include <iostream>
#include <random>
#include <thread>
#include "Date.h"
#include "TestDateGenerator.h"

using namespace std;

int main() {

    //Тесты
    TestDateGenerator testDateGenerator = TestDateGenerator();
    testDateGenerator.TestMaxDayInFebruary();
    testDateGenerator.TestMaxDayInFebruaryWhenYearIsLeap();
    testDateGenerator.TestMaxDayinMonths();

    while (true) {
        //Генерация случайной даты
        Date DateGenerator = Date();
        std::string date = DateGenerator.Generate();

        //Вывод на экран и пауза
        cout << date << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}