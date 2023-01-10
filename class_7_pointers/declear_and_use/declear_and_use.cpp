#include <iostream>

int main(){

    // Initialize
    // It is not possible to assign a variable of a different type wrt the one of pointer
    int* p_num1 {nullptr}; // In this way is an empty pointer
    int* p_num2 {}; // It is unitialized like in "nullptr" (not reccomended)

    double num3 {33.5};
    double* p_num3 {&num3};

    //All pointers are of the same size (8 Bytes)
    std::cout << "Int Pointer size is: " << sizeof(p_num1) << std::endl;
    std::cout << "Double Pointer size is: " << sizeof(p_num3) << std::endl;

    // It is possible to change the pointer locatio:
    int num1 {4};
    std::cout << "Original Address: " << p_num1 << std::endl;
    p_num1 = &num1;
    std::cout << "New Address: " << p_num1 << std::endl;

    // Access the pointer
    std::cout << "The value assigned to the address: " << p_num3  
        << " is " << *p_num3 << std::endl;
    
    return 0;

}