#include <iostream>
#include <iomanip>

int main(){

    int number1 {};
    int number2 {};

    std::cout << "Give me first number: " << std::endl;
    std::cin >> number1;

    std::cout << "Give me second number: " << std::endl;
    std::cin >> number2;

    // Addition
    signed int result { number1 + number2 };
    std::cout << "Their sum is: " << result << std::endl;

    // Subtraction
    result = number2 - number1;
    std::cout << "Their difference is: " << result << std::endl;

    // Multiplication
    result = number1 * number2;
    std::cout << "Their multiplication is: " << result << std::endl;

    // Division: returns only the integer part if the result is stored as int

    result = number1 / number2;
    std::cout << "Their int division is: " << result << std::endl;

    std::cout << std::setprecision(10);
    float result_f { static_cast<float>(number1) / static_cast<float>(number2) };
    std::cout << "Their float division is: " << result_f << std::endl;

    // Module: it make sense only with integers
    result = number1 % number2;
    std::cout << "Their module is: " << result << std::endl;


    return 0;
}