#include <iostream>

int main() {
    std::string name;
    std::string fullname;
    int age;

    std::cout << "What's your name? ";
    std::cin >> name; // no space between strings
    std::cout << "Hello, " << name << std::endl;

    std::cout << "What's your age? ";
    std::cin >> age; // also get newline character at the end of input
    std::cout << "You are " << age << " years old." << std::endl;
    // above will create issue for getline function

    std::cout << "What's your full name (with space)? ";
    //std::getline(std::cin, fullname);
    std::getline(std::cin >> std::ws, fullname); // eliminate newline character
    std::cout << "Hello, " << fullname << std::endl;

    return 0;
}