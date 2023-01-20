#include <iostream>
#include <cstdio>
using namespace std;

/*
Input Format

Input will contain four integers -a, b, c, d one per line.

Output Format

Return the greatest of the four integers.
*/

int max_of_four(int a, int b, int c, int d){
    // Create an array with the number
    int numbs[4] {};
    numbs[0] = a; 
    numbs[1] = b;
    numbs[2] = c;
    numbs[3] = d;
    // Iterate over
    double max_num{-1e10};
    for (const int numb : numbs){
        if (numb > max_num) max_num = numb;
    }
    return static_cast<signed int>(max_num);
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
