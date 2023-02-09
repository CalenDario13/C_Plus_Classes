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

int Fibonacci(int n){
    if (n==0 || n==1){
        return n;
    }else{
        int subprob1{Fibonacci(n-1)};
        int subprob2{Fibonacci(n-2)};
        return subprob1 + subprob2;
    }
}

int PrintNaturalN(int n){
    if (n==0) return 0;
    PrintNaturalN(n - 1);
    cout << n << endl;
}

int main(){
    unsigned int n{};
    int fact{};
    int fib{};
    cout << "Give a number to compute the factorial: ";
    cin >> n;
    cout << "The series of number is: " << endl;
    PrintNaturalN(n);

    fact = Factrotial(n);
    cout << "The factorial of " << n << " is " << fact << endl;

    fib = Fibonacci(n);
    cout << "The Fibonacci value of " << n << " is " << fib << endl;
    return 0;
}