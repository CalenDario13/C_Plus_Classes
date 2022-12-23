#include <iostream>

int main(){

    size_t i {};
    size_t COUNT {10};

    while(i < COUNT){
        std::cout << i << ": Hello World!" << std::endl;
        ++i; // Incrementation
    }
    return 0;

    
}