#include <iostream>
#include <iomanip>

/*
float -> 4 Bytes, precision of 7 digits
double -> 8 Bytes, precision of 15 digits
long double -> 16 bytes, precision of 20 digits
*/


int main(){

    float number1 { 1.9889774678432f }; //without "f" it is interpreted as a double
    float number2 { 1.973e-6 };
    double number3 { 5.66487895768905468975476 };
    double number4 {};
    double number5 {};
    long double number6 {4.898988978976394123L};

    double inf_result ( number3 / number4 );
    double nan_result ( number4 / number5 );

    std::cout << std::setprecision(20); // control the precision to print
    std::cout << "Float Number size is: " << sizeof(number1) << std::endl;
    std::cout << "Double Number size is: " << sizeof(number3) << std::endl;
    std::cout << "Long Double Number size is: " << sizeof(number6) << std::endl;
    std::cout << " " << std::endl;
    std::cout << "The Precision of a float is only 7 digits"  << std::endl;
    std::cout << "Original 1.9889774678432 vs Printed " << number1 << std::endl;
    std::cout << "The Precision of a double 15 digits"  << std::endl;
    std::cout << "Original 5.66487895768905468975476 vs Printed " <<number3 << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Divide a number by zero Returns: " << inf_result << std::endl;
    std::cout << "0 / 0 is: " << nan_result << std::endl;


    
    return 0;
}

