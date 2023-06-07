#include <iostream>

int main() {
    int age;

    std::cout << "You are viewing sensitive website, please enter you age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "WELCOME!! You are old enough to view this website" << std::endl;
    } else if (age < 0) {
        std::cout << "Seriously, you haven't been born yet" << std::endl;
    } else {
        std::cout << "GET OUT!! You are not old enough to view this website" << std::endl;
    }

    return 0;
}