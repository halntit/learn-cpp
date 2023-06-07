# include <iostream>

int main() {
    bool sunny = true;
    int temp;

    if (!sunny) {
        std::cout << "It's not sunny today" << std::endl;
    } else {
        std::cout << "It's sunny today" << std::endl;
    }

    std::cout << "Enter a temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {
        std::cout << "It's a warm day" << std::endl;
    } else if (temp >= 30 && temp < 50) {
        std::cout << "It's a hot day" << std::endl;
    } else {
        std::cout << "It's a cold day" << std::endl;
    }

    return 0;
}