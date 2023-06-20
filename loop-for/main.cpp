#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 7) continue;
        for (int j = 0; j < 10; j++) {
            std::cout << "i = " << i;
            std::cout << "; j = " << j << "\n";
            if (j == 5) break;
        }
    } 

    return 0;
}