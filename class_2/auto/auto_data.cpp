#include <iostream>

// "auto" automatically cast the variable

int main(){

    auto var1 {12}; //int
    auto var2 {13.0}; //double
    auto var3 {14.0f}; //float
    auto var4 {15.0l}; //float
    auto var5 {123u}; //unsigned integer
    auto var6 {123ul}; //usnigned long integer

    // ASSIGN A NEW VALUE
    int initial_value {};
    std::cout << "Give me a positive integer number" << std::endl;
    std::cin >> initial_value;
    initial_value = 33;
    std::cout << "I have changed your number in " << initial_value << std::endl;

    // PAY ATTENTION TO ASSIGN VALUES TO AUTO CATSED VARIABLES
    auto var7{333u};
    std::cout << "----------------------------" << std::endl;
    std::cout << "The original Values is " << var7 << std::endl;
    var7 = -22;
    std::cout << "But after assigning  a negative value (-22) to variable which was casted as u int, the compiler assign a junk value to the variable. " 
        << var7 << std::endl;

    return 0;

}