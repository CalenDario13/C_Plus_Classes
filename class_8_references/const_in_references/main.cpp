#include <iostream>

int main(){

    // Declear a Const pointer
    // It simulates the bhevaiour we have with references
    int age{33};
    const int* const const_int{&age};

    // Const apply to reference variable name, not to original variable
    // It does not matter whether the original variable is constant or not
    const int& ref_int{age};

    return 0;
}