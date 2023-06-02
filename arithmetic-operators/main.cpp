#include <iostream>

int main() {
    int students = 20;
    students = students + 1; // 21
    students++; // 22
    students += 1; // 23
    std::cout << students << std::endl;

    students -= 1; // 22
    students--; // 21
    std::cout << students << std::endl;

    students *= 2; // 42
    std::cout << students << std::endl;

    students /= 3; // 14
    std::cout << students << std::endl;

    int remainder = students % 3; // 2
    std::cout << remainder << std::endl;

    /// priority
    // parentheses
    // multiplication / division
    // addition / subtraction
    int aNumber = (1 + 4) * 2 - 1; // 9
    std::cout << aNumber << std::endl;
    int aNumber2 = (1 + 4) * (2 - 1); // 5
    std::cout << aNumber2 << std::endl;

    return 0;
}