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
        return 1;
    }else{
        int subprob1{Fibonacci(n-1)};
        int subprob2{Fibonacci(n-2)};
        return subprob1 + subprob2;
    }
}

void PrintNaturalN(int n, bool decr){
    // Base Assumption
    if (n==0) return;

    if(decr){
        cout << n << " ";
        PrintNaturalN(n - 1, decr);
    }else{
        // Recursive Assumption
        PrintNaturalN(n - 1, decr);
        // Self Work
        cout << n << " ";
    }
    
}

void PrintBothDir(int n){
    if (n==1){
        cout << n << " ";
        return;
    }else{
        cout << n << " ";
        PrintBothDir(n - 1);
        cout << n << " ";
    }
    
}

int NoConsecutiveOnes(int n){
    // Find #Binary arrays whith no adiacents 1s
    // For a martrix of nxn 
    // Where each row is a binary array

    if (n==1 || n ==2){
        return n + 1;
    }else{
        int firstVal{NoConsecutiveOnes(n-1)};
        int secondVal{NoConsecutiveOnes(n-2)};
        return firstVal + secondVal;

    }
}


int main(){
    unsigned int n{};
    int fact{};
    int fib{};
    int order{};
    int zeroCombo{};

    cout << "Give a number to compute the factorial: ";
    cin >> n;
    cout << "In which order do you want to print the series 0-Decr, 1-Cresc, 2-Both: ";
    cin >> order;

    switch (order)
    {
    case 0:
        PrintNaturalN(n, true);
        break;
    case 1:
        PrintNaturalN(n, false);
        break;
    default:
        PrintBothDir(n);
        break;
    }

    cout << endl;

    fact = Factrotial(n);
    cout << "The factorial of " << n << " is " << fact << endl;

    fib = Fibonacci(n);
    cout << "The Fibonacci value of " << n << " is " << fib << endl;
    
    zeroCombo = NoConsecutiveOnes(n);
    cout << "Given a Binary Array of Size " << n << ". There are " <<  zeroCombo << " combos which do not contain consecuitve 1s" << endl;
    
    return 0;
}