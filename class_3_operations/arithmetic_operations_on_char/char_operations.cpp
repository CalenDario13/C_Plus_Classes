#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    short int var1 {10}; // 2 bytes
    short int var2 {20};

    char var3 {40}; // 1 byte
    char var4 {50};

    auto result1 { var1 + var2 };
    auto result2 { var3 + var4 }; // the vars are automatically casted in int

    std::cout << std::left;
    std::cout << std::setw(10) << "result1 is: " << std::setw(5) << result1 <<
     std::setw(20) << "size of result1: " <<std::setw(5) << sizeof(result1) << std::endl;
    std::cout << std::setw(10) << "result1 is: " << std::setw(5) << result1 << 
     std::setw(20) << "size of result2: " <<std::setw(5) << sizeof(result2) << std::endl;

    return 0;

}