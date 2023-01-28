#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*
Input Format

The first line of the input contains N,where N is the number of integers.The next line contains  space-separated integ

Output Format
Print the N integers of the array in the reverse order, space-separated on a single line.
*/



int main() {
    
    int size;
    cin >> size;
    int* arr;
    arr = (int*)malloc(sizeof(int)*size);

    for(int i = 0; i < size; ++i){
        int tmp_n;
        cin >> tmp_n;
        *(arr + i) = tmp_n;
    }

    int rev_cnt{size-1};
    while(rev_cnt >= 0){
        cout << arr[rev_cnt] << " ";
        --rev_cnt;
    }

    free(arr);

    return 0;
}
