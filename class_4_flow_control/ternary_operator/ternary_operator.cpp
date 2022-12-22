#include <iostream>

int main(){

    int num1;
    int num2;
    int result;

    std::cout << "Give me a number: " << std::endl;
    std::cin >> num1;
    std::cout << "Give me another number: " << std::endl;
    std::cin >> num2;

    if (num1 > num2){
        result = num1;
    } else{
        result = num2;
    }

    std::cout << "The greatest num is: " << result << std::endl;

    // Alternative way: ternary operator
    // The types of the variables in the condition MUST match

    int result_2 { num1 > num2 ? num1 : num2 };
    std::cout << "The alternatuive way return the same result: " << result_2 << std::endl;  

    return 0;
}