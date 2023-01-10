#include <iostream>

int main(){

    // char pointers are const
    // If you want to modify the string, don't use pointers
    const char* message {"Hello World!"}; 
    std::cout << "message: " << message << std::endl;

    // The pointer is referred to the first element of the string:
    std::cout << "The pointer refers to " << *message << std::endl;

    // Allow the user to modify the string:
    char message1[13] {"Hello World!"};
    message1[0] = "B";

    std::cout << "Without pointer it is possible to modify the string " << message1 << std::endl;
    
    return 0;

}