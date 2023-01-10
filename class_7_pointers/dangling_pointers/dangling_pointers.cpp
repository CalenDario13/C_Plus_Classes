#include <iostream>

int main(){
    

    // Dangling Pointers are pointers which do not point to valid memory address
    // VERY BAD!!


    /*
    // Case1: Not Properly Initialized:
    int* p_num1;
    std::cout << "p_num1: " << p_num1 << std::endl;
    std::cout << "p_num1: " << *p_num1 << std::endl; // CRACH!!
    */

    // SOLVE PROBLEM 1:
    int* p_num5 {nullptr};
    int* p_num6 { new int {87} };

    if( p_num6 != nullptr ){
    std::cout << "p_num6: " << *p_num6 << std::endl;
    }else{
    std::cout << "INVALID ADDRESS" << *p_num6 << std::endl;
    }


    /*
    // Case2: Deleted Pointer:
    int* p_num2 { new int {67} };
    std::cout << "Before Delte: : " << *p_num2 << std::endl;
    
    delete p_num2;
    std::cout << "After Delte: : " << *p_num2 << std::endl; // CRACH!!
    */

    // SOLVE PROBLEM 2:
    int* p_num7 {new int {33}};
    delete p_num7;
    p_num7 = nullptr;

    if( p_num7 != nullptr ){
    std::cout << "p_num7: " << *p_num7 << std::endl;
    }else{
    std::cout << "INVALID ADDRESS" << *p_num7 << std::endl;
    }

    /*
    // Case3: Multiple Pointers pointing to same address:
    int* p_num3 { new int {88} };
    int* p_num4 {p_num3};
    std::cout << "p_num 3: " <<  p_num3 << " is: " << *p_num3 << std::endl;
    std::cout << "p_num 4: " <<  p_num4 << " is: " << *p_num4 << std::endl;
    
    delete p_num3;
    std::cout << "p-num4 after deleting p_num3 : " << *p_num4 << std::endl; // CRACH!!
    */

    // SOLVE PROBLEM 3:
    int* p_num8 { new int {88} };
    int* p_num9 {p_num8};
    std::cout << "p_num 8: " <<  p_num8 << " is: " << *p_num8 << std::endl;
    std::cout << "p_num 9: " <<  p_num9 << " is: " << *p_num9 << std::endl;
    
    delete p_num8;
    p_num8 = nullptr;

    if(!(p_num8 ==nullptr)){
        std::cout << "p_num9 " << p_num9 << " - " << *p_num9 << std::endl;
    }else{
        std::cout << "TRYING TO USE AND INVALID POINTER" << *p_num9 << std::endl;
    }
    
    return 0;

}