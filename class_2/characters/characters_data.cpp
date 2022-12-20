#include <iostream>

int main(){
    
    char character1 {'a'};
    char character2 {65}; // It reads also ASCII

    std::cout << character1 << std::endl;
    std::cout << "A charcater occupies " << sizeof(character1) << " byte" << std::endl;

    // "static_cast<type>(var)" interpret anything as what is given

    std::cout << "ASCII " << static_cast<int>(character2) << " is " << character2 << " in letters" << std::endl;


    return 0;
}