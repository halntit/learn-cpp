#include <iostream>

namespace foo {
    int x = 1;
}

namespace bar {
    int x = 2;
}

int main() {

    // int x = 0;
    // int x = 1; // error: redefinition of 'x'
    // std::cout << x << std::endl; // 0

    std::cout << foo::x << std::endl; // 0 (foo::x) is different from (x)
    std::cout << bar::x << std::endl; // 1 (bar::x) is different from (x) and (foo::x)

    using namespace foo;
    std::cout << x << std::endl; // 1 x from namespace foo

    return 0;
}