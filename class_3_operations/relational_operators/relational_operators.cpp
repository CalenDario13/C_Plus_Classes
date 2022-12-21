#include <iostream>
#include <iomanip>

int main(){

    int num1 {};
    int num2 {};

    std::cout << "Give me a number: " << std::endl;
    std::cin >> num1;
    std::cout << "Give me another number: " << std::endl;
    std::cin >> num2;

    // "<<" operator has priority than "<; >; ==; ..." that's why here I need teh parenthesis. 

    std::cout << std::boolalpha;
    std::cout << "Is num1 > num2: " << ( num1 > num2 ) << std::endl;
    std::cout << "Is num1 <= num2: " << ( num1 <= num2 ) << std::endl;
    std::cout << "Is num1 == num2: " << ( num1 == num2 ) << std::endl;
    std::cout << "Is num1 != num2: " << ( num1 != num2 ) << std::endl;

    // It is possible to store the result
    std::cout << "----------------------" << std::endl;
    bool is_greater {num1 > num2};
    std::cout << "Is greater stored result: " << is_greater << std::endl;


    return 0;
}