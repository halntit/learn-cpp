#include <iostream>

int main() {
    // psudo random number generator
    srand(time(NULL)); // seed random number generator

    int num = rand();
    std::cout << num << std::endl;

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int num3 = rand() % 10 + 1;
    std::cout << num1 << " " << num2 << " " << num3 << std::endl;

    return 0;
}