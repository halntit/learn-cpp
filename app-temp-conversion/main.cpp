#include <iostream>

int main () {
    double temp;
    char unit;
    char toUnit;

    std::cout << "****** Temparature Conversion ******" << std::endl;
    std::cout << "Enter temperature: ";
    std::cin >> temp;

    std::cout << "Enter unit (c/f): ";
    std::cin >> unit;

    if (unit == 'c') {
        temp = (temp - 32) * 5 / 9;
        toUnit = 'f';
    } else if (unit == 'f') {
        temp = (temp * 9 / 5) + 32;
        toUnit = 'c';
    } else {
        std::cout << "Invalid unit" << std::endl;
        return 0;
    }

    std::cout << "Result: " << temp << toUnit << std::endl;

    return 0;
}