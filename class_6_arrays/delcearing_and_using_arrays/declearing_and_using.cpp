#include <iostream>

int main(){
    // Declear an array of ints
    int scores [10]; // Junk Data
    // Read Data
    std::cout << "First Score is: " << scores[0] << std::endl;
    std::cout << "Second Score is: " << scores[1] << std::endl;
    // Use a For Loop to show the results:
    for(size_t i = 0; i < 10; ++i){
        std::cout << "Score in Position " << i + 1 << "is: " << scores[i] << std::endl;
    }
 
    std::cout << "--------------------------------" << std::endl;

    // Assign values:

    for(size_t i {0}; i < 10; ++i){
        scores[i] = i * 10;
        std::cout << "Score in Position " << i + 1 << " is: " << scores[i] << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    // Declear and initialize an array inplace
    double salaries[5] {2.33, 6.7, 89.0, 34.2, 1.0};
    for(size_t i{0}; i < 5; ++i){
        std::cout << "Salary " << i + 1 << " is: " << salaries[i] << std::endl;
    }
    
    std::cout << "--------------------------------" << std::endl;

    // When omitted, the size is estimated by the compiler if therer are elements inside
    int family[] {2, 4, 2, 3, 5};
    for(auto value : family){
        std::cout << "Number of people in a family is:  " << value << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    // Do operations:
    int new_scores[10] {5, 7, 8, 2, 4, 5, 7, 7, 9, 10}; // It is not possible to declear two arrays with the same name
    int total_score {0};

    for(auto score : new_scores){
        total_score += score;
    }

    std::cout << "Total Score is: " << total_score << std::endl;
    
    return 0;




    }