#include <iostream>
#include <ctime>

int main() {
    srand(time(0)); // seed random number generator, use current time

    int num = rand() % 5 + 1; // random number between 1 and 5

    switch (num) {
        case 1:
            std::cout << "You win a bumper scooter";
            break;
        case 2:
            std::cout << "You win a car";
            break;
        case 3:
            std::cout << "You win a bike";
            break;
        case 4:
            std::cout << "You win a boat";
            break;
        case 5:
            std::cout << "You win a plane";
            break;
        default:
            std::cout << "You lose!";
    }
    std::cout << std::endl;

    return 0;
}