#include <iostream>

int main() {
    std::string foods[3][2] = {
        {"pizza", "hamburger"},
        {"hot dog", "spaghetti"},
        {"taco", "steak"}
    };

    int rows = sizeof(foods) / sizeof(foods[0]);
    int cols = sizeof(foods[0]) / sizeof(foods[0][0]);

    for (int i = 0; i < rows; i++) {
        std::cout << "Row " << i << ": ";
        for (int j = 0; j < cols; j++) {
            std::cout << foods[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}