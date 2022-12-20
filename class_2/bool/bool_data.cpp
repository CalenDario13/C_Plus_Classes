#include <iostream>

// boolian values occupy 8 bits in Memory

int main(){

    bool green_light{};

    std::cout << "The trafficlights is green? (0) False and (1) True" << std::endl;
    std::cin >> green_light;

    if ( green_light == true ){
        std::cout << "The Light is Green" << std::endl;
    }else{
        std::cout << "The Light is red" << std::endl;
    }

    // The double if-else is not needed, it is just to show different way to use bool
    if ( green_light){
        std::cout << "GO Through!" << std::endl;
    }else{
        std::cout << "STOP!" << std::endl;
    }

    // use "std::boolalpha" to print bool as string
    std::cout << std::boolalpha;
    std::cout << "The light is green? " << green_light << std::endl;

    std::cout << "How many bytes occupy a bool? " << sizeof(green_light) << std::endl;


    return 0;

}