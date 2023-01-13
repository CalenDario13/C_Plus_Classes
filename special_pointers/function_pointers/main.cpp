#include <cstdlib>
#include <iostream>


int Add(int a, int b){
    return a+ b;
}

void PrintHello(char *name){
    printf("Hello %s\n", name);
}


int main(){

        // In Code Text chunk in the ram are contained the instracrtion of the code to run in sequence
        // A function is a set of instructions, which is stored in 1 ore more contigous blocks in the RAM
        // It is possible to hav a pointer which stores the entry point which contains the isntructions of the fun
    
    int c;
    int (*p)(int, int); // Initialize a pointer to a function (must have same type and all the args)
    p = &Add;
    c = (*p)(2, 3);
    printf("The sum of 2 and 3 is: %d\n", c);

    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Tom");

    return 0;

}