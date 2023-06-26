#include <iostream>

// decorator
void printInfo(const std::string name, const int age);

int main() {
    // const parameter: parameters that is effectively read only
    // code is more secure and convey intent useful for references and pointers

    std::string name = "John";
    int age = 21;
    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age) {
    // name = ""; // will not work
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << '\n';
}