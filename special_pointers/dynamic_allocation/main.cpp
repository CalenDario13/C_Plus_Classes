#include <cstdlib>
#include <iostream>



int main(){

    // Stack size is FIXED during the run time, whereas the HEAP seize is NOT.
    // It is useful to allocate large variables used during the running.
    // USING HEAP = DYNAMI MEMORY ALLOCATION

    int a; // goes on stack
    int* p { new int {10} };
    const int array_size {5};

    printf("The numebr is: %d", *p);
 
    delete p;
    p = nullptr;

    p = new int[array_size];
    for (size_t i = 0; i < array_size; i++){
        std::cout << *(p + i) << std::endl;
    }
    
    delete[] p;
    p = nullptr;

    // Malloc Returns a void pointer, which allocate free memory in heap of a given size
    int* ptr = (int*)std::malloc(sizeof(int)); // Allocate in the hype the space for an int
    std::free(ptr);
    ptr = nullptr;
    
    ptr = (int*)std::malloc(sizeof(int)*array_size);  // Allocate the space for an array 
    for(int i=0; i<array_size; i++) { 
        std::cout << "Value = " << *(ptr + i) << std::endl; 
    } 
    std::free(ptr);
    ptr = nullptr;

    // Calloc is like malloc, but it takes 2 args: the number of elements and the size of the data type
    // It also intialize the values inside the memory
    ptr = (int*)std::calloc(array_size, sizeof(int));
    std::cout << "-----------" << std::endl;
    for(int i=0; i<array_size; i++) { 
        *(ptr + i) = i + 1;
        std::cout << "Value = " << i + 1 << std::endl; 
    } 

    // realloc change the size of an existing block:
    std::cout << "-----------" << std::endl;
    int *new_ptr {(int*)std::realloc(ptr, array_size*sizeof(int)+5)}; 
    for(int i=0; i<(array_size+5); i++) { 
        *(ptr + i) = i + 1;
        std::cout << "Value = " << i + 1 << std::endl; 
    } 
    std::free(ptr);
    ptr = nullptr;

    return 0;

}