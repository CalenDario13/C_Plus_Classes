#include <iostream>

// A Statement is anything followed by a semicolumn ";"
// Statements are top-down way

int addNumbers(int first_number, int second_number){
    int result = first_number + second_number;
    return result;
}

int main(int argc, char **argv){

    int firstNumber = 12;
    int secondNumber = 9;

    std::cout << "First Number is: " << firstNumber << std::endl;
    std::cout << "Second Number is: " << secondNumber << std::endl;

    int sum = addNumbers(firstNumber, secondNumber);

    std::cout << "The sum of the two is: " << sum << std::endl;

    return 0;
}