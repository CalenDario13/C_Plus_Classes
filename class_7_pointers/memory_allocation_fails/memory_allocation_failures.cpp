#include <iostream>

int main(){
    
    /*
    // Too MUCH STORAGE TO ALLOCATE LEAD TO CRACH!
    int* data { new int[10000000000000] };
    std::cout << "Program Ending Well" << std::endl;

    // OR 

    for(size_t i = 0; i < 10000000; ++i){
        int* data = new int[1000000];
    }
    */

    // HOW TO AVOID THE PROBLEM 1:

    for(size_t i = 0; i < 10; ++i){
        try{
            int* data = new int[100000000000000000];
        }catch(std::exception& ex){
            std::cout << "Somenthing went WRONG: " << ex.what() << std::endl;
        }
    }

    // HOW TO AVOID THE PROBLEM 2:

    for(size_t i = 0; i < 10; ++i){
        int* data = new(std::nothrow) int[100000000000000000];
        if(data!=nullptr){
            std::cout << "Data Allocated" << std::endl;
        }else{
            std::cout << "Data Allocation Failed" << std::endl;
        }
    }

    std::cout << "Program Ending Well" << std::endl;


    return 0;

}