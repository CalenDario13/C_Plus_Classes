#include <iostream>
#include <string>

/*
int -> occupuies 4 Bytes
double
float
char
bool
void
auto 
*/

/*
|Digits| Bytes | Data Range
|------|-------|-----------|
|  8   |   1   | 0 - 255   |
|  16  |   2   | 0 - 65535 |
|  32  |   4   | 0 - 34e^9 |
----------------------------
*/

/*
int main(){

    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0f; //Hexadecimal
    int number4 = 0b00001111; //Binary


std::cout << "Number1 is: " << number1 << std::endl;
std::cout << "Number2 is: " << number2 << std::endl;
std::cout << "Number3 is: " << number3 << std::endl;
std::cout << "Number4 is: " << number4 << std::endl;

return 0;

}
*/

// Integers

int main(){

    int elephant_count; // It is randomly initialized, with a GARBAGE VALUE
    int lion_count {}; // It is initialized to zero
    int dog_count {10};
    int cat_count  {15};

    int domesticated_animals {dog_count + cat_count}; // Expression as Initializer

    std::cout << "Elephant Count: " << elephant_count << std::endl;
    std::cout << "Lion Count: " << lion_count << std::endl;
    std::cout << "Dog Count: " << dog_count << std::endl;
    std::cout << "Cat Count: " << cat_count << std::endl;

    std::cout << "How many pets? : " << domesticated_animals << std::endl;

    /*
    YOU MUST DECLEAR THE VARIABLES BEFORE USING THEM
    FOLLOWING EXPRESSION WON'T COMPILE
    
    int bad_initialization {doesnt_exist1 + doesnt_exist2};
    */

    /*
    It is not possible to store a fraction as integer
    It raises a Warning while compiling and save only the integer part
    
    int narrowing_conversion (2.9);

    Instead with curly brackets it raises an error
    
    int narrowing_conversion {2.9};
    */

    // Let's query the size of the variable
    std::cout << "Size of int " << sizeof(int) << std::endl;
    std::cout << "Size of cat_count " << sizeof(cat_count) << std::endl;

    return 0;
}




