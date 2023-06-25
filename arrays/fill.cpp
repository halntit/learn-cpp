#include <iostream>

int main() {
    std::string foods[10] = {"pizza", "hamburger", "hot dog",
        "spaghetti", "taco", "steak", "chicken",
        "salad", "soup", "sandwich"};
    for (std::string food : foods) {
        std::cout << food << std::endl;
    }

    // fill the array with the same value
    std::fill(foods, foods + 10, "pzzia");
    for (std::string food : foods) {
        std::cout << food << std::endl;
    }

    const int SIZE = 100;
    std::string foods2[SIZE];
    std::fill(foods2, foods2 + (SIZE/2), "burger");
    std::fill(foods2 + SIZE/2, foods2 + SIZE, "chicken");
    for (std::string food : foods2) {
        std::cout << food << std::endl;
    }

    return 0;
}