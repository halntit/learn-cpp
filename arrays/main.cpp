#include <iostream>

int main() {
    // array should contains values of the same data type
    std::string cars[] = {"Ford", "Toyota", "Honda"};
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;
    // std::cout << cars[3] << std::endl; // This will cause an error
    std::cout << cars << std::endl; // This will print pointer to array

    // std::string foods[]; // will cause an error because array size is not specified
    std::string foods[3];
    foods[0] = "Pizza";
    foods[1] = "Burger";
    foods[2] = "Fries";
    // foods[3] = "Sushi"; // This will cause an error because array size is 3
    std::cout << foods[0] << std::endl;
    std::cout << foods[1] << std::endl;
    std::cout << foods[2] << std::endl;

    return 0;
}