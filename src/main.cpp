#include <iostream>
#include <random>
#include <thread>
#include "Date.h"
#include "TestDateGenerator.h"

using namespace std;

int main() {

    TestDateGenerator testDateGenerator = TestDateGenerator();
    testDateGenerator.TestMaxDayInFebruary();
    testDateGenerator.TestMaxDayInFebruaryWhenYearIsLeap();
    testDateGenerator.TestMaxDayinMonths();

    while (true) {
        Date DateGenerator = Date();
        std::string date = DateGenerator.Generate();

        cout << date << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}