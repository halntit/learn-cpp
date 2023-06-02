#include <iostream>

int main() {
    int x = 3.14; // warning, return 3
    std::cout << x << std::endl;

    double y = (int)3.14;
    std::cout << y << std::endl; // also return 3

    char c = 100; // implicit conversion
    std::cout << c << std::endl; // d (ascii) = 100

    int n1 = 80;
    int n2 = 100;
    double score = (n1 / n2) * 100;
    std::cout << score << std::endl; // 0

    double score2 = (double)n1 / n2 * 100;
    std::cout << score2 << std::endl; // 80

    return 0;
}