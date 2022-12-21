#include <iostream>
#include <iomanip>

/*
https://en.cppreference.com/w/cpp/language/operator_precedence
precedence: which operation first
associativity: which direction/order
*/

int main(){

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c - d/e - f + g; // 6 + 24 - 3 - 2 +5
    std::cout << "The result is: " << result << std::endl;

    result = a + (b * c) - (d/e) - f + g; // Same result using parenthesis
    std::cout << "The same result using parenthesis: " << result << std::endl;

    result = (a + b) * c - (d/e) - f + g;     // Use parenthesis to force the order
    std::cout << "The same result changing the order is: " << result << std::endl;


    int result = a/b*c - e + f; // 2*8 + 9 - 3 + 2
    std::cout << "The result is: " << result << std::endl;
    

    return 0;
}