#include <iostream>
#include <cstdio>
using namespace std;

/*
Input Format

You will be given two positive integers, a and  b, with a <= b, separated by a newline.

Output Format

For each integer  in the inclusive interval :

If 1 <= n <= 9, then print the English representation of it in lowercase.
Else if n > 9 and it is an even number, then print "even".
Else if n < 9 and it is an odd number, then print "odd".
*/


int main() {
    
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    string numbers[] {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = num1; i <= num2; ++i){
        if (i > 0 && i < 10){
            cout << numbers[i-1] << endl;
        }else{
            cout << ( (i % 2 == 0) ?  "even" : "odd" ) << endl;
        }             
    }
    
    return 0;
}
