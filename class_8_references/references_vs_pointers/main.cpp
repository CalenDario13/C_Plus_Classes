#include <iostream>

int main(){

    // Reference MUST BE initialized at declaration
    // CANNOT BE CHANGED to reference somenthiing else
    // DON NOT USE DEFERENCING for reading and writing
    // You can see as CONST POINTERS

    double double_data{33.3};
    double other_double{44.6};

    double& ref_to_double{double_data};
    double* ptr_double{&double_data};

    std::cout << "double_data " << double_data << std::endl;
    std::cout << "ref_to_double " << ref_to_double << std::endl;
    std::cout << "*ptr_double " << *ptr_double << std::endl;

    std::cout << std::endl;

    std::cout << "&double_data " << &double_data << std::endl;
    std::cout << "&ref_to_double " << &ref_to_double << std::endl;
    std::cout << "ptr_double " << ptr_double << std::endl;

    // Assign a new value.
    double_data = other_double;

    std::cout << std::endl;
    std::cout << "Original Address: " << &double_data << std::endl;
    std::cout << "Assigning a value throughput a new avriable in references does not change the address " <<
        &double_data << std::endl;

    // Assign a new value by pointers.
    *ptr_double = 78;

    std::cout << std::endl;
    std::cout << "New value is: " << double_data << std::endl;
       

    return 0;
}