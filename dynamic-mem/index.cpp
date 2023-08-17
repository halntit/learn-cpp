#include <iostream>

int main() {
    // dynamic memory: Memory that is allocated after program is already complied and run
    // use 'new' operator to allocate memory in the heap rather than the stack
    // useful when we don't know how much memory we need, make our programs more flexible
    // especially when accepting user input

    int *pNum = NULL;
    pNum = new int;
    *pNum = 10;

    std::cout << "address: " << pNum << std::endl;
    std::cout << "value: " << *pNum << std::endl;

    delete pNum; // prevent memory leak


    char *pGrades = NULL;
    int size;

    std::cout << "Enter number of grades: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << std::endl;
    }

    delete[] pGrades;

    return 0;
}