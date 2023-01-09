#include <iostream>
#include <string>

int main(){

    // "\0" this i s a termination character
    // It is needed when the array size is bigger than the #elements.
    
    char message_1[5] {'H', 'e', 'l', 'l', 'o'};
    char message_2[6] {'H', 'e', 'l', 'l', 'o', '\0'}; // it is called C-String
    char message_3[] {'H', 'e', 'l', 'l', 'o'}; // not a proper C-String
    char message_4[] {"Hello"};

    std::cout << message_1 << std::endl;
    std::cout << "The size is: " << sizeof(message_1) << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << message_2 << std::endl;
    std::cout << "The size is: " << sizeof(message_2) << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << message_3 << std::endl;
    std::cout << "The size is: " << sizeof(message_3) << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << message_4 << std::endl;
    std::cout << "The size is: " << sizeof(message_4) << std::endl;
    
    // It is possible to directly print only char array

    return 0;

    }