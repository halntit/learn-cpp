#include <iostream>

int number = 5; // global variable

void printNumber() {
    int number = 10; // local variable, if not present, global variable will be used instead
    std::cout << number << std::endl;
}

int main() {
    int number = 1; // local variable

    std::cout << number << std::endl;
    printNumber();

    return 0;
}