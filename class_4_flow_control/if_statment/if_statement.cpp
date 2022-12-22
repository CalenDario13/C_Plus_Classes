#include <iostream>
#include <iomanip>

int main(){

    int number1 {};
    int number2 {};

    std::cout << " Give me the first number: " <<  std::endl;
    std::cin >> number1;
    std::cout <<  " Give me the second number: " << std::endl;
    std::cin >> number2;

    std::cout << "" <<std::endl;

    // bool result = (number1 < number2);

    if (number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    } else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    return 0;

}