//
// Created by Дмитрий on 20.08.17.
//

#include <assert.h>
#include "TestDateGenerator.h"
#include "FakeRandom.h"


TestDateGenerator::TestDateGenerator() {
    this->mRandom = new FakeRandom();
}

void TestDateGenerator::TestMaxDayInFebruaryWhenYearIsLeap() {
    int LeapYear = 2000;
    int Febrary = 2;
    assert(this->GenerateDay(LeapYear, Febrary) == 29);

    LeapYear = 2008;
    Febrary = 2;
    assert(this->GenerateDay(LeapYear, Febrary) == 29);

    int NotLeapYear = 1900;
    Febrary = 2;
    assert(this->GenerateDay(NotLeapYear, Febrary) == 28);

}

void TestDateGenerator::TestMaxDayInFebruary() {
    int NotLeapYear = 1903;
    int Febrary = 2;
    assert(this->GenerateDay(NotLeapYear, Febrary) == 28);
}

void TestDateGenerator::TestMaxDayinMonths() {
    int NotLeapYear = 2013;
    int Month = 1;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);

    Month = 2;
    assert(this->GenerateDay(NotLeapYear, Month) == 28);

    Month = 3;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);

    Month = 4;
    assert(this->GenerateDay(NotLeapYear, Month) == 30);

    Month = 5;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);

    Month = 6;
    assert(this->GenerateDay(NotLeapYear, Month) == 30);

    Month = 7;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);

    Month = 8;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);

    Month = 9;
    assert(this->GenerateDay(NotLeapYear, Month) == 30);

    Month = 10;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);

    Month = 11;
    assert(this->GenerateDay(NotLeapYear, Month) == 30);

    Month = 12;
    assert(this->GenerateDay(NotLeapYear, Month) == 31);
}













