#include <iostream>

// pass by value: copy value from a variable
// pass by reference: memory address of a variable

void swap(std::string &x, std::string &y);

int main() {
    std::string x = "Hello World X!";
    std::string y = "Welcome to Y++";

    swap(x, y);

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    return 0;
}

void swap(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}