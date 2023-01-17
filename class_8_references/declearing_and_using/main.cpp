#include <iostream>

int main(){
    int int_data{23};
    double double_data{33.3};

    // Reference (it is the same value and same address)
    int& ref_to_int{int_data};
    double& ref_to_double{double_data};

    std::cout << "int_data " << int_data << std::endl;
    std::cout << "ref_to_int " << ref_to_int << std::endl;
    std::cout << "&int_data " << &int_data << std::endl;
    std::cout << "&ref_to_int " << &ref_to_int << std::endl;

    // It is posible to chaneg the value throughout the reference
    std::cout << std::endl;
    ref_to_int = 25;
    std::cout << "The new value is: " << int_data << std::endl;

    // When you change the original, also the reference is chnaged:
    std::cout << std::endl;
    int_data = 55;
    std::cout << "The new value is : " << ref_to_int << std::endl;

    return 0;
}