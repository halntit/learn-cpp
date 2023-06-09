#include <iostream>

int main() {
    std::string name;

    name = "Le Nguyen";
    std::cout << "Name value -> " << name << std::endl;
    // std::cout << "Enter your name: ";
    // std::getline(std::cin, name);

    // if (name.length() > 12) {
    //     std::cout << "Your name can be over 12 chars" << std::endl;
    //     return 0;
    // }

    // if (name.empty()) {
    //     std::cout << "Please enter your name!" << std::endl;
    // } else {
    //     std::cout << "Welcome " << name << std::endl;
    // }

    name.clear();
    std::cout << "Name value (now is empty) -> " << name << std::endl;

    name.append("John");
    std::cout << "Append to name variable -> " << name << std::endl;

    name.insert(2, "Smith");
    std::cout << "Append to name variable -> " << name << std::endl;

    name.erase(0, 3);
    std::cout << "Append to name variable -> " << name << std::endl;

    return 0;
}