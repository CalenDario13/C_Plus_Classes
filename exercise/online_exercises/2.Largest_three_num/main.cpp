#include <iostream>
using namespace std;

int FindMaxNum(int* arr, int size){
    int maxNum{0}, tmp{};
    for(size_t i=0; i < size; ++i){
        tmp =  *(arr + i);
        cout << tmp << endl;
        if(tmp > maxNum){
            maxNum = tmp;
        }
    }
    return maxNum;
}

int main(void){
    const size_t ARR_LEN {10};
    int arr[ARR_LEN] {9,2,3,70,89,100,17,0,89,10};
    int maxNum { FindMaxNum(arr, ARR_LEN) };
    cout << "The max number of the array is: " << maxNum << endl;
    return 0;
}