#include <iostream>
#include <ctime>

int main() {
    srand(time(0)); // seed random number generator, use current time

    int num = rand() % 5 + 1; // random number between 1 and 5
    int guess = 0;

    while (guess != num) {
        std::cout << "Guess a number between 1 and 5: ";
        std::cin >> guess;

        if (guess < num) {
            std::cout << "Your guess is too low" << std::endl;
        } else if (guess > num) {
            std::cout << "Your guess is too high" << std::endl;
        } else {
            std::cout << "You win!" << std::endl;
        }
    }
    std::cout << std::endl;

    return 0;
}