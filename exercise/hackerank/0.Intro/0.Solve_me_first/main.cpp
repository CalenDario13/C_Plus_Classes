#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below:
 int sum{};
 sum = a + b;
 return sum; 
}

int main() {
  int num1{0}, num2{1001};
  int sum;
  while(num1 < 1 || num2 > 1000 ){
    cin>>num1>>num2;
  }
  sum = solveMeFirst(num1,num2);
  cout <<sum ;
  return 0;
}