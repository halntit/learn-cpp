#include <iostream>

// bubble sort algorithm implementation for arrays
void sort(int numbers[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {10, 3, 5, 4, 2, 1, 5, 6, 8, 7, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, size);

    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}