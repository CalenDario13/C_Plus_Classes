#include <iostream>
using namespace std;

int Factrotial(int n){
    // base case
    if(n==1){
        return 1;
    }else{
        // recursion assumption
        int subproblem{ Factrotial(n - 1) };
        // self work
        return n * subproblem;
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