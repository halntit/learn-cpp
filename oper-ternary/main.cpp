# include <iostream>

int main() {
    int grade = 75;
    grade >= 60 ? std::cout << "Pass" : std::cout << "Fail";

    int number = 7;
    number % 2 == 0 ? std::cout << "Even" : std::cout << "Odd";

    int age = 18;
    age >= 18 ? std::cout << "Adult" : std::cout << "Child";

    char gradeLetter = 'A';
    gradeLetter == 'A' ? std::cout << "Excellent" : std::cout << "Good";

    char op = '+';
    op == '+' ? std::cout << "Addition" : std::cout << "Subtraction";

    return 0;
}