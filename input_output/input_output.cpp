#include <iostream>


// How to output:
int main(){

    // How to input:

    int age;
    std::string name;

    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    // Print a Message
    std::cout << "You are " << name << " and you are " << age << " old." << std::endl;
    // Print a Log
    std::clog << "This is a Log message" << std::endl;
    // Print an Error
    std::cerr << "Somenthing went wrong" << std::endl;
}


