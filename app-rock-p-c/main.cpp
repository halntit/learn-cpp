#include <iostream>

char getUserChoice() {
    char choice;

    do {
        std::cout << "Rock-Paper-Scissors game\n";
        std::cout << "Enter your choice:\n";
        std::cout << "r. Rock\n";
        std::cout << "p. Paper\n";
        std::cout << "s. Scissors\n";
        std::cin >> choice;
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char getCompChoice() {
    char choice;
    srand(time(0));
    int choiceNumber = rand() % 3 + 1;
    switch (choiceNumber) {
        case 1:
            choice = 'r';
            break;
        case 2:
            choice = 'p';
            break;
        case 3:
            choice = 's';
            break;
    }

    return choice;
}

void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock";
            break;
        case 'p':
            std::cout << "Paper";
            break;
        default:
            std::cout << "Scissors";
            break;
    }
}

void chooseWinner(char choice, char compChoice) {
    if (choice == compChoice) {
        std::cout << "Tie" << std::endl;
    } else if (choice == 'r' && compChoice == 's') {
        std::cout << "You win" << std::endl;
    } else if (choice == 'p' && compChoice == 'r') {
        std::cout << "You win" << std::endl;
    } else if (choice == 's' && compChoice == 'p') {
        std::cout << "You win" << std::endl;
    } else {
        std::cout << "You lose" << std::endl;
    }
}

int main() {
    char pChoice = getUserChoice();
    std::cout << "You chose ";
    showChoice(pChoice);

    char compChoice = getCompChoice();
    std::cout << ", computer chose ";
    showChoice(compChoice);

    std::cout << std::endl;

    chooseWinner(pChoice, compChoice);

    return 0;
}