#include <iostream>

int main(){

    // Memory allocation on the stack (pointers)
    int num1 {56};
    int* p_num1 {&num1};

    std::cout << "TO location: " << p_num1 << " is assigned value: "
        << *p_num1 << std::endl;

    /*
    BAD THINGS TO DO:
    int *p_number2; // JUNK ADDRESS
    *p_number2 = 55; // DON'T WRITWE INTO A JUNK ADDRESS

    int *p_number3 {}; // IT POINTS TO NO WHERE
    *p_number3 = 55; // DON'T WRITWE INTO A POINTER TO NO WHERE    
    */

   // Dynamic Allocation (allocate to Heap)
   int* p_num4 = new int; // This peace of memory belongs to this program from now on.
   *p_num4 = 77;

    std::cout << "To location: " << p_num4 << " is assigned value: "
        << *p_num4 << std::endl;

    // Relase memory to the system
    // It is important to delete + null allocation
    // DON'T CALL DELETE TWICE FOR A POINTER
    // It is possible to rersue the pointers after deletion
    delete p_num4; 
    p_num4 = nullptr;

    // Direct Initialization:
    int *p_num5 { new int {44} };
    std::cout << "To location: " << p_num5 << " is assigned value: "
        << *p_num5 << " Directly initialized."<<  std::endl;

    delete p_num5; 
    p_num5 = nullptr;

    
    return 0;

}