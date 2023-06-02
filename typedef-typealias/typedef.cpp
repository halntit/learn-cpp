#include <iostream>
#include <vector>

// always use _t for typedef
typedef std::vector< std::pair< std::string, int > > pairlist_t;
typedef std::string text_t;
using text2_t = std::string;
typedef int number_t;
using number2_t = int;

int main() {
    //std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    text_t fName = "Bob";
    number_t age = 42;

    std::cout << fName << " - " << age << std::endl;

    text2_t fName2 = "Mary";
    number2_t age2 = 24;

    std::cout << fName2 << " - " << age2 << std::endl;

    return 0;
}