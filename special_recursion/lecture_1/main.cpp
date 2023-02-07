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
    // return (n <= 1) ? 1 : n*(Factorial(n-1))
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