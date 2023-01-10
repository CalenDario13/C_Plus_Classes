#include <iostream>

int main(){
    
    // Null pointer check:

    int* p_num1 {};
    p_num1 = new int{7};

    if(p_num1){
        std::cout << "VALID ADDRESS: " << p_num1 << "*p_num1: " << *p_num1 << std::endl;
    }else{
        std::cout << "INVALID ADDRESS: " <<  std::endl;
    }
    
    delete p_num1;
    p_num1 = nullptr; // It is not needed if the pointer is already nullptr

    return 0;

}