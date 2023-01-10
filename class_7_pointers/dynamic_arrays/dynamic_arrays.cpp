#include <iostream>

int main(){
    
    const size_t size{10};
    double* p_salaries { new double[size]{3,5.5,8.7,3.9,4.6} } ;


    if(p_salaries){
        std::cout << "Size of the array pointer is: " << sizeof(p_salaries) << std::endl;
        std::cout << "----------------" << std::endl;
        for(size_t i = 0; i < size; ++i){
            std::cout << "value: " << p_salaries[i] << " or " << *(p_salaries + i) << std::endl;
        }

    }

    delete[] p_salaries;
    p_salaries = nullptr;

    // In DYNAMIC ARRAYS IT IS NOT POSSIBLE TO USE std::size AND  
    // AND LOOPS LIKE (for el : array){}

    return 0;

}