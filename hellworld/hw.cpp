#include <iostream>

int main() {
    std::cout << "Hello World!" << '\n'; // cout: character output stream
    std::cout << "I like pizza!" << std::endl; // <<: insertion operator
    /**
     * std::endl: end line, also flushes the output buffer and moves the cursor to a new line
     * \n: only moves the cursor to a new line
     */

    return 0;
}