#include <iostream>

int main() {
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy", "Mr. Krabs"};
    // this have problem with array size
    // for (int i = 0; i < 5; ++i) {
    //     std::cout << students[i] << std::endl;
    // }
    // for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i) {
    //     std::cout << students[i] << std::endl;
    // }

    // for-each loop
    for (auto student : students) {
        std::cout << student << std::endl;
    }

    return 0;
}