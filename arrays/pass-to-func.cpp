#include <iostream>

double getTotalWrong(double prices[]); // decorator
double getTotal(double prices[], int size); // decorator

int main() {
    double prices[] = {1.99, 2.99, 3.99, 4.99, 5.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    // double total = getTotalWrong(prices); // issue here
    double total = getTotal(prices, size);
    std::cout << total << std::endl;

    return 0;
}

// this one will not work because when we pass array, it will be copied 
// to another memory location and the size will be lost
double getTotalWrong(double prices[]) {
    double total = 0;
    // for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); ++i) {
    //     total += prices[i];
    // }

    return total;
}

double getTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; ++i) {
        total += prices[i];
    }

    return total;
}