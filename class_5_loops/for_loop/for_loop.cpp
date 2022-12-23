#include <iostream>
#include <iomanip>

int main(){

    // "size_t" = "unsigned int"
    const size_t COUNT {10};
    for (size_t i = 0; i < COUNT; ++i){
        std::cout << i << ": Hello World!" << std::endl;
    }

    return 0;
}