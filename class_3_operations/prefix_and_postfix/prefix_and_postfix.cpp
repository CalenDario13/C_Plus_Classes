#include <iostream>
#include <iomanip>

int main(){

    int value {5};
    std::cout << "the value is incrementing: " << value++ << std::endl;
    std::cout << "Now the value is: " << value << std::endl;

    std::cout << "-----------------------" << std::endl; 

    std::cout << "Decrementing the value: " << value-- << std::endl;
    std::cout << "Now the value is: " << value << std::endl;

    // How to directly decrementing (order of operation changes)


    std::cout << "-----------------------" << std::endl; 

    value = 5;
    std::cout << "the value is: " << value << std::endl;
    std::cout << "Incremented value is: " << ++value << std::endl;

    std::cout << "-----------------------" << std::endl; 

    std::cout << "the value is: " << value << std::endl;
    std::cout << "Decremented value is: " << --value << std::endl;


    return 0;

}