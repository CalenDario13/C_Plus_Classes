#include <iostream>

int main(){

    int scores[] {5, 7, 4, 5, 10};

    // Loop over when the size is not known:
    size_t COUNT { std::size(scores) };

    for ( size_t i {0}; i < COUNT; ++i){
        std::cout << "score [" << i << "] " << "is " << scores[i] << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    
    // Before c++ 17:
    const int array_size { sizeof( scores ) };
    const int element_size { sizeof( scores[0] ) };
    size_t OLD_COUNT { array_size / element_size };

    std::cout << "The Number of element is: " << OLD_COUNT << std::endl;

    for ( size_t i {0}; i < OLD_COUNT; ++i){
        std::cout << "score [" << i << "] " << "is " << scores[i] << std::endl;
    }
    std::cout << "----------------------" << std::endl;

    // Loop over without knowing the size:

    for ( auto score : scores){
        std::cout << "score is " << score << std::endl;
    }
    
    return 0;

    }