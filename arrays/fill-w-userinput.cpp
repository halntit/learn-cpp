#include <iostream>

int main() {
    std::string foods[3];
    int size = sizeof(foods) / sizeof(foods[0]);

    std::string tmp;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food or 'q' to quit: ";
        std::getline(std::cin, tmp);

        if (tmp == "q") {
            break;
        } else {
            foods[i] = tmp;
        }
    }

    std::cout << "You entered: " << std::endl;
    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << std::endl;
    }

    return 0;
}