#include <iostream>
#include <sstream>

int main() {
    /// memory address: a location in memory where data is stored
    /// pointer: a variable that points to a location in memory

    std::string name = "Le Nguyen";
    int age = 20;
    bool isMale = true;

    std::cout << &name << std::endl; // hexadecimal address
    std::cout << &age << std::endl;
    std::cout << &isMale << std::endl;

    std::string s1 = "0x7ffee308c240"; // example for &name > 3809002048 (string 24 bytes)
    unsigned int x = std::stoul(s1, nullptr, 16);
    std::cout << x << std::endl;
    std::string s2 = "0x7ffee308c23c"; // example for &age > 3809002044 (4 bytes from &name, int 4 bytes from &isMale)
    unsigned int y = std::stoul(s2, nullptr, 16);
    std::cout << y << std::endl;
    std::string s3 = "0x7ffee308c23b"; // example for &isMale > 3809002043 (1 byte from &age, boolean 1 byte from &isMale)
    unsigned int z = std::stoul(s3, nullptr, 16);
    std::cout << z << std::endl;

    return 0;
}