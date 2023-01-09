#include <iostream>

int main(){
    
    // Read beyond bounds: it is possible but does not make sense and it is ERROR PRUNE
    int numbers[] {1,2,3,4,5};
    std::cout << "It reads put of bounds, but it makes no sense: " << numbers[6] << std::endl;

    // It is also possible to assign values out of boundaruies, BUT NO SENSE
    // Program craches if th eposition is too far.
    numbers[12] = 23;
    std::cout << "Let's check the modified location out of boundaries: " << numbers[12] << std::endl;
    std::cerr << "Not possible to check/modify so far position..." << std::endl;
    numbers[120000] = 1;
    std::cout << "Let's check the far away modified location out of boundaries: " << numbers[120000] << std::endl;
    return 0;




    }