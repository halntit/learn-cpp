#include <iostream>

int main() {
    // vars: variables

    // integer
    int x; // declaration
    x = 5; // initialization
    std::cout << x << std::endl;

    int y = 7; // declaration and initialization
    std::cout << y << std::endl;

    int z = x + y;
    std::cout << z << std::endl;

    int a = -7;
    int b = 3.5; // warning: implicit conversion from 'double' to 'int' changes value from 3.5 to 3
    std::cout << a << " - " << b << std::endl;

    // floating point, double
    double price = 9.99;
    double tax = 0.06;
    double gpa = 3.5;
    std::cout << price << " - " << tax << " - " << gpa << std::endl;

    // character (single quotes)
    char letter = 'A';
    char grade = 'BC'; // warning: multi-character character constant [-Wmultichar] // C
    std::cout << letter << " - " << grade << std::endl;

    // boolean (true or false)
    bool isTall = true;
    bool isMale = false;
    bool forSale = true;

    // string (double quotes), std::string is a class (object) that represents a sequence of characters
    std::string name = "John";
    std::string sentence = "This is a sentence.";
    std::cout << name << " - " << sentence << std::endl;

    return 0;
}