#include <iostream>
#include <stdio.h>

int main(){

    
    // Array is automatically a pointer
    int scores[] {4, 5, 6, 8, 9};

    printf("Prrinting the array, it gives me the address of the first cell: %d\n", scores);
    printf("It is the same of using the '&' operator: %d\n", &scores);

    for(size_t i = 0; i < 5; i++){
        printf( "Address = %d, Value = %d\n", &scores[i], scores[i] );
        printf( "Address = %d, Value = %d\n", scores + i, *(scores+i) );
        printf("--------------\n");

    }

    // It is not possible to directly manipulate the address:
    // scores++; // IS NOT POSSIBLE
    int *p = scores;
    printf("original: %d\n", p);
    p++;
    printf("new: %d\n", p); // The priginal address of the array has not changed

    return 0;

}