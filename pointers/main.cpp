#include <iostream>

// pointers: variable that stores memory address of another variable,
// sometimes it's easier to work with an address than a value

// & address-of operator
// * dereference operator

int main() {
    std::string name = "Ha Le";
    std::string *pName = &name; // how to named a pointer (with preffix p)

    int age = 21;
    int *pAge = &age;

    std::string freePizzas[5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4", "Pizza 5"};
    std::string *pFreePizzas = freePizzas; // array is already a pointer, no need dereference

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << pFreePizzas << std::endl;
    std::cout << *pFreePizzas << std::endl;

    return 0;
}