#include <iostream>
#include <stdio.h>

void increment(int *p){
    *p = (*p) + 1;
}

int main(){

    // Call By reference (It Save memory)
    int a {10};
    printf("address = %d, value = %d\n", &a, a);
    increment(&a);
    printf("a + 1 is: %d\n", a) ;

    
    return 0;

}