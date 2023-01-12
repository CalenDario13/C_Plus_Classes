#include <iostream>
#include <stdio.h>

void Print3DArray(int (*A)[2][2]){
    // Except from the first Dim all the others must be enforced
    // In this case the function can take as input our "C" variable
}

int main(){

    // In Multidimentional arrays, each address refers to an array
    // EX. int B[2][3] is a 1-D array of 3 integers
    // 2 1-D Array sof 3 integers each: each arrays occupies 12 Bytes
    // B[i][j] = *(B[i] + j) = *(*(B + i) + j)

    int B[2][3] {{1,2,3},
                {4,5,6}};
    int (*p)[3] = B; // This is the way to declear th pointer
    printf("B is: %d\n", B);  // This is the pointer of the first 1-D array
    printf("*B is: %d\n", *B); // Same
    printf("B[0] is: %d\n", B[0]); // Same
    printf("&B[0][0] is: %d\n", &B[0][0]); // Same
    printf("*(B[i] + j) is: %d\n", *( B[0] + 0 ) ); // Gives me the value pf the first element of the first 1-D Array
    printf("*(*(B + i) + j) is: %d\n", *(*(B + 0) + 0)); // Same

    std::cout << "--------------------------" << std::endl;
    // 3D rray
    int C[3][2][2] {{{1,2},{3,4}},
                    {{5,6},{7,8}},
                    {{9,10},{11,12}}}; // It is 3 1-D Array of 2-D Dimentional array
    int (*p1)[2][2] = C;
    printf("C: %d\n", C); // It prints the addres of the first 2D array
    printf("*C: %d\n", C); // Same
    printf("C[0]: %d\n", C); // Same
    printf("&C[0][0]: %d\n", C); // Same
    printf("C[0][1][0]: %d\n", C[0][1][0]); // It prints second element of the firs 1D array of the first 2D array
    printf("*(C[0][1] + 0): %d\n", C[0][1][0]); // Same
    printf("*(*(C[0] + 1) + 0): %d\n", *(*(C[0] + 1) + 0)); // Same
    
    
    // Pass in a function

    
    return 0;

}