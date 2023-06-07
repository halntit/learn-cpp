# include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********* Calculator *********" << std::endl;
    std::cout << "Enter an operator (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}