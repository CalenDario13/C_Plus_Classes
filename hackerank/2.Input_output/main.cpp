#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
Read  numbers from stdin and print their sum to stdout.
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1, num2, num3, sum;
    std::cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    std::cout << num1 + num2 + num3 << std::endl;
    return 0;
}
