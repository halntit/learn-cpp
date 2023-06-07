#include <iostream>

int main() {
    char grade;

    std::cout << "Enter your grade? ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "Excellent";
            break;
        case 'B':
            std::cout << "Good";
            break;
        case 'C':
            std::cout << "Average";
            break;
        case 'D':
            std::cout << "Poor";
            break;
        case 'F':   
            std::cout << "Fail";
            break;
        default:
            std::cout << "Invalid grade, only A, B, C, D or F";

    }
    std::cout << std::endl;

    return 0;
}