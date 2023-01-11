#include <iostream>
#include <stdio.h>

int SumElements(int A[], int size){
    // The Compiler just create a Pointer to the Array A and do not compy it in memory
    // So it must be interpreted as int* A[]
    // It is ALWAYS called by reference
    // It is better to use int* A directly in the input

    printf( "The size of A in the function is: %d:\n", sizeof(A) );
    std::cout << "Which is the size of the pointer" << std::endl;
    int i, sum {0};
    for (i = 0; i < size; i++){
        sum += A[i];
    }
    return sum;
}

void DoubleElments(int* A, int size){
    int i, sum {0};
    for(i = 0; i < size; i++){
       A[i] = 2*A[i];
    }
}

int main(){

    int A[] {1, 2, 3, 4, 5};
    int i;
    int size { std::size(A) };
    int total { SumElements(A, size) };
    std::cout << "The total Sum of Elements is: " << total << std::endl;
    DoubleElments(A, size);
    std::cout << "The new array is: " << std::endl;
    for(i = 0; i < size; i++){
        printf("%d ", A[i]);
    }

    return 0;

}