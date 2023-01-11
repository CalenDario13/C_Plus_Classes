#include <iostream>
#include <stdio.h>

int main(){

    // Why we need types?
    // Because data types have different size
    // The pointer is refered to the first memory cell
    // The other cells arwe dudeced by the data type (in row)


    int a {1025};
    int* p0 {&a};

    printf( "Size of int is %d Bytes\n", sizeof(int) );
    printf( "Address = %p, value = %d\n", p0, *p0 );

    char* p1; // IT is only 1 Byte
    p1 = (char*)p0; // Type casting

    printf( "Size of int is %d Bytes\n", sizeof(char) );
    printf( "Address = %p, value = %d\n", p1, *p1 ); // It will be print only the first value, because the pointe takes only the first Byte

    // Arithmetic operations are possible, BUT we don't know what there is in the obtained RAM cell
    printf( "Address = %d, value = %d\n", p0, *p0 );
    printf( "Address = %d, garbage value = %d\n", p0 + 1, *(p0 + 1) ); // 4 More Bytes

    // Generic Pointer
    // It is not possible to access the value
    void *p2;
    p2 = p0;
    printf( "Address = %p, value = NA\n", p0);

    
    return 0;

}