#include <iostream>
#include <random>
#include "Date.h"

using namespace std;

int main() {

    Date DateGenerator = Date();
    std::string date = DateGenerator.Generate();

    cout << date << std::endl;

    return 0;
}