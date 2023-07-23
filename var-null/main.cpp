#include <iostream>

int main() {
    int *pointer = nullptr; // null pointer
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "pointer is null" << std::endl;
    } else {
        std::cout << "pointer is not null" << std::endl;
        std::cout << *pointer << std::endl;
    }

    return 0;
}