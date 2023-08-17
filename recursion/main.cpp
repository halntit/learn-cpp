#include <iostream>

void walk(int steps);
int factorial(int n);

int main() {
    walk(10);

    std::cout << factorial(4);

    return 0;
}

void walk(int steps) {
    //Iterative
    // for(int i = 0; i < steps; i++) {
    //     std::cout << "Walk" << std::endl;
    // }

    //Recursive
    if (steps > 0) {
        walk(steps - 1);
        std::cout << "Walk" << std::endl;
    }
}

int factorial(int n) {
    // Iterative
    // int result = 1;
    // for(int i = 1; i <= n; i++) {
    //     result *= i;
    // }
    // return result;

    // Recursive
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}