#include <iostream>

int main(){
    // Both Positive and negative numbers occpuy 4 Bytes
    int value1 {10};
    int value2 {-300};

    std::cout << "value1: " << value1 << std::endl;
    std::cout << "Size of value1: " << sizeof(value1) << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "Size of value2: " << sizeof(value2) << std::endl;

    unsigned int value3 {4}; // It can store only positive numbers
    signed int value4 {-5}; // "signed int" can store both positive and negative numbers
    signed int value5 {5};

    // "short int" occupyes only 2 Bytes
    short int value6 {33};
    std::cout << "Short int occupies: " << sizeof(value6) << " Bytes" << std::endl;

    // "long int occupies 4 or 8 Bytes"

    long int value7 {3000000};
    std::cout << "Long int occupies: " << sizeof(value7) << " Bytes" << std::endl;
    long signed int value8 {-3000000};
    std::cout << "Long int occupies: " << sizeof(value8) << " Bytes" << std::endl;

    // "long long int" occupies 8 Bytes
    long long int value9 {30000000000};
    std::cout << "Long Long int occupies: " << sizeof(value9) << " Bytes" << std::endl;

    return 0;

}