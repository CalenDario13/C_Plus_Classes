#include <iostream>
using namespace std;

int Factrotial(int n){
    // base case
    if(n==1){
        return 1;
    // recursion assumption
    }else{
        return n * Factrotial(n - 1);
    }
}

int main(){
    unsigned int n{};
    int fact{};
    cout << "Give a number to compute the factorial: ";
    cin >> n;

    fact = Factrotial(n);
    cout << "The factorial of " << n << " is " << fact << endl;
    return 0;
}