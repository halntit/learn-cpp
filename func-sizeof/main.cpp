#include <iostream>

int main() {
    double pga = 2.5;
    std::cout << sizeof(pga) << std::endl; // 8 bytes

    std::string name = "John";
    std::cout << sizeof(name) << std::endl; // 24 bytes

    char letter = 'A';
    std::cout << sizeof(letter) << std::endl; // 1 byte

    bool isTrue = true;
    std::cout << sizeof(isTrue) << std::endl; // 1 byte

    int a = 10;
    std::cout << sizeof(a) << std::endl; // 4 bytes

    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // 5 elements
    std::cout << sizeof(grades) << std::endl; // 5 bytes
    std::cout << sizeof(grades) / sizeof(grades[0]) << " elements" << std::endl;

    return 0;
}