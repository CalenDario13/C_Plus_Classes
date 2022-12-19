#include <iostream>

// A Statement is anything followed by ";"

int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv){
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = addNumbers(firstNumber, secondNumber);

    std::cout << "The sum of the two is: " << sum << std::endl;

    return 0;
}