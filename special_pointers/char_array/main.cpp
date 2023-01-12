#include <iostream>
#include <stdio.h>
#include <string.h>


void print(char* c_arr){
    int i {0};
    while(c_arr[i] != '\0'){
        printf("%c", c_arr[i]);
        i++;
    }
    printf("\n");
}

int main(){

    // Char Array, must have n valuews + 1, whih is "\0"
    // As you can see the length of the string corresponds to the number of chgaracters used
    // But the size include also the special cjharacter automatically added by the compiler


    // C Way
    char name[] {"Dario"}; // the "\0" is implicit; it is stored in the space for array
    int len = strlen(name);
    printf("The string length is: %d\n", len);
    printf("The string size is: %d\n", sizeof(name));
    

    // cpp Approach
    std::cout << "-------------" << std::endl;
    std::string my_name {"Dario"}; // the "\0" is implicit
    std::cout << "The string length is: " << my_name.length() << std::endl;
    std::cout << "The string size is: "<< my_name.size() << std::endl;   

    // Use pointers
    // Arrays and Pointers are different types used in a similar manner

    char c1[6] {"Hello"};
    char* c2; 
    c2 = c1; // VALID: Returns address of the first element of the array
    printf("The addres of first element is: %d, or even this is valid: %d\n", c1, c2);
    printf("Bu diffeent size: %d and %d\n", sizeof(c1), sizeof(c2));


    // Also in this case arrays are passed to function by reference
    std::cout << "The name is :" << std::endl;
    print(name);



    return 0;

}