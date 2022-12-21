#include <iostream>
#include <iomanip>

int main(){

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    // Basic AND operations...
    std::cout << "a && b " << (a && b) << std::endl;
    std::cout << "a && c " << (a && c) << std::endl;
    std::cout << "a && b && c " << (a && b && c) << std::endl;

    // Basic OR operations...
    std::cout << "a || b " << (a || b) << std::endl;
    std::cout << "a || c " << (a || c) << std::endl;
    std::cout << "a || b || c " << (a || b || c) << std::endl;

    // NOT operator
    std::cout << "NOT a " << !a << std::endl;
    std::cout << "NOT c " << !c << std::endl;
    std::cout << "NOT b " << !b << std::endl;

    // Combine Operations
    std::cout << "!(a && b) || c " << (!(a && b) || c) << std::endl;

    return 0;
}