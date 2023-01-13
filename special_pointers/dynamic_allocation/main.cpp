#include <iostream>


int main(){

    // Stack size is FIXED during the run time, whereas the HEAP seize is NOT.
    // It is useful to allocate large variables used during the running.
    // USING HEAP = DYNAMI MEMORY ALLOCATION

    int a; // goes on stack
    int* p { new int {10} };

    printf("The numebr is: %d", *p);

    delete p;
    p = nullptr;

    p = new int[20];
    for (size_t i = 0; i < 20; i++){
        std::cout << *(p + i) << ", ";
    }
    std::cout << std::endl;
    
    delete[] p;
    p = nullptr;
    
    return 0;

}