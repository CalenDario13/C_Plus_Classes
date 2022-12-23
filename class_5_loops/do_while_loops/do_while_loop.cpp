#include <iostream>

int main(){
    // do while loop FIRST execute the body of the loop and SECON check the condition

    const size_t COUNT {10};
    size_t i {};

    do{
        std::cout << i << ": Hello World!" << std::endl;
        ++i;
    } while (i < COUNT);

    return 0;
}