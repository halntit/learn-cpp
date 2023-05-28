#include <iostream>

int main() {
    // const: constants
    const double PI = 3.14159; // constants are usually named with all capital letters
    double radius = 5.0;
    double circumference = 2 * pi * radius;
    std::cout << "The circumference is: " << circumference << std::endl;

    const int DAYS_IN_WEEK = 7;
    const int DAYS_IN_YEAR = 365;
    const int LIGHT_SPEED = 299792458; // m/s

    return 0;
}