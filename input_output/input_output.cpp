#include <iostream>


// How to output:
int main(){

    // How to input:

    int age;
    std::string surname;
    std::string name;

    std::cout << "Enter your name and surname separted by a space: " << std::endl;
    std::cin >> name >> surname;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    // Print a Message
    std::cout << "You are " << name << " " << surname << " and you are " << age << " years old." << std::endl;
    // Print a Log
    std::clog << "This is a Log message" << std::endl;
    // Print an Error
    std::cerr << "Somenthing went wrong" << std::endl;
}


