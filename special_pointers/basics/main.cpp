#include <iostream>
#include <stdio.h>

int main(){

    // Initialize a Pointer and Undrstand it:
    int a{44};
    int* pa{ &a };

    std::cout << "Position of Variable a is:" << pa << " and teh value is: " << *pa << std::endl;
    printf("The index value is: %p\n", pa);
    printf("The index value is: %p\n", &a);
    printf("The value is: %d\n",  *pa);

    // Modify the Pointer:
    // The address won't change, only the value
    int b {55};
    *pa = b;
    printf("New assigned value is: %d\n", *pa);

    // Pointer Arithmetic:
    // It is DANGEROUS to do this operations
    printf("Size of Pointer: %d\n", sizeof(int));
    printf("Original index %d\n", pa);
    printf("Plus 1 Index (4 Bytes more because it is an int) %d\n", pa + 1);

    return 0;


}