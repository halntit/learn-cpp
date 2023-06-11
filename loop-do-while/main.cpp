#include <iostream>

int main() {
    int number;
    //// while loop: do some stuff while the condition is true
    // while (number > 0) {
    //     std::cout << "Enter a negative number: ";
    //     std::cin >> number;
    // }

    //// do-while loop: do some stuff FIRST and then repeat the loop
    do {
        std::cout << "Enter a negative number: ";
        std::cin >> number;
    } while (number > 0);

    std::cout << "Done -> " << number << std::endl;

    return 0;
}