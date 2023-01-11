#include <iostream>
#include <stdio.h>

int main(){

    // To store A Pointer Address to a Pointer, we need the same type
    int x {5};
    int* p {&x};
    int **q {&p};
    int ***r {&q};
    
    printf("Value of Pointer p is: %d\n", *p);
    printf("Value of Pointer q is the position of p: %d\n", *q);
    printf("Get Value of p from q: %d\n", **q);
    printf("Value of Pointer r is the position of q: %d\n", *r);
    printf("Get Valuen of p from r: %d\n", ***r);
    return 0;

}