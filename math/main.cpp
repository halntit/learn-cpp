#include <iostream>
#include <cmath>

int main() {
    double x, y, z;
    x = 3;
    y = 4;

    z = std::max(x, y);
    std::cout << z << std::endl;

    z = std::min(x, y);
    std::cout << z << std::endl;

    z = pow(2, 3);
    std::cout << z << std::endl;

    z = sqrt(9);
    std::cout << z << std::endl;

    z = abs(-19);
    std::cout << z << std::endl;

    z = round(3.5);
    std::cout << z << std::endl;

    z = ceil(3.5);
    std::cout << z << std::endl;

    z = floor(3.5);
    std::cout << z << std::endl;

    return 0;
}