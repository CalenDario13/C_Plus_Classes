#include <cstdlib>
#include <iostream>
#include <cmath>
#include <stdlib.h>


int compare(int a, int b){
    if (a > b) return -1;
    else return 1;
}

int absolute_compare(int a, int b){
    if (std::abs(a) < std::abs(b)) return 1;
    else return -1;
}

void BubbleSort( int *A, int n, int (*compare)(int, int) ){
    int i, j, tmp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(compare(A[j], A[j+1]) > 0){
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }    
    }
}


int main(){ // Calling Function
    // It is possible to use pointers to call a function in another funcrtion (call back)
    const int size {5};
    int family[size] {7, 3, 5, 1, 2};
    BubbleSort(family, size, compare);
    for(size_t i = 0; i < size; i++) printf("%d, ", family[i]);

    // std::qsort(A, size, sizeof(int)) // in library stdlib.h, it is the bubble sort
    return 0;

}