#include <cstdlib>
#include <iostream>

int Add(int* a, int* b){ // Called Function
    // a nad b are pointers top integers
    int c {(*a) + (*b)};
    return c;
}

int* AddPointersReturn(int a, int b){ // Called Function
    // It is CORRECT only for heap or global allocated variables
    int* c { (int*)std::malloc(sizeof(int)) };
    *c = a + b;
    return c; // It is an address (becaus ewe used malloc)
}

int main(){ // Calling Function
    int x {2}, y {4};
    int z { Add(&x, &y) };
    printf("The sum is: %d\n", z);
    int* ptr {AddPointersReturn(x, y)};
    printf("The Address of the sum is: %d\n", ptr);
    printf("The Value of the sum is: %d\n", *ptr);

    return 0;

}