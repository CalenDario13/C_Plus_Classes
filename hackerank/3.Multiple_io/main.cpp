#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/*
Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

int main() {
    
    int i;
    long int j;
    char c;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf", &i, &j, &c, &f, &d );

    printf("%d\n", i);
    printf("%ld\n", j);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);
  
    
    return 0;
}