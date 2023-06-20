#include <iostream>

void sayHB() {
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday dear you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
}

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) { // overloaded function
    return a + b + c;
}

int main() {
    sayHB();

    std::cout << sum(1, 2) << std::endl;
    std::cout << sum(1, 2, 3) << std::endl;

    return 0;
}