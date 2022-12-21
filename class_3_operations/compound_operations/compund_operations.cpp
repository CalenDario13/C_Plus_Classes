#include <iostream>
#include <iomanip>

// They are available only for addition and subtraction

int main(){

    int value {45};
    std::cout << "The original number is: " << value << std::endl;

    value += 5;
    std::cout << "Let's add 5: " << value << std::endl;

    value -= 5;
    std::cout << "Let's subtract 5: " << value << std::endl;

    value *= 5;
    std::cout << "Let's multiply by 5: " << value << std::endl;

    value /= 5;
    std::cout << "Let's divide by 5: " << value << std::endl;

    value %= 6;
    std::cout << "Let's get the module of 6: " << value << std::endl;


    return 0;

}