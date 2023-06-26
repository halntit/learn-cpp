#include <iostream>

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0'; // covert char to int
    }
    return sum;
}

int sumEventDigits(const std::string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}

int main() {
    // Luhn's algorithm
    // Credit card number validation
    // Step1: double every second digit from right to left. If doubled number is 2 digits, split them
    // Step2: add all single digits from step1
    // Step3: add all odd number digits from right to left
    // Step4: sum results from step2 and step3
    // Step5: divide sum by 10 to get the check digit, if check digit is 0, the number is valid

    std::string number;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> number;
    std::cout << "Number: " << number << std::endl;

    result = sumEventDigits(number) + sumOddDigits(number);
    if (result % 10 == 0) {
        std::cout << "Valid" << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}