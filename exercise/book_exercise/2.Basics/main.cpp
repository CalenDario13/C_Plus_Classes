#include <iostream>
using namespace std;

int calculator(int a, int b, int op){
    switch(op){
        case 1:
            return a + b;
            break;
        case 2:
            return a - b;
            break;
        case 3:
            return a * b;
            break;
        case 4:
            if(b!=0)  return a / b;
            else return-1; 
            break;
        default:
            return -1;
    }
}

int main(){
    
    int operation, num1, num2, result;

    cout << "Which Operatio DO qou want to solve: 1-addition; 2-subtraction; 3-multiplicatio; 4-division: ";
    cin >> operation;
    cout << "give me to integer separated by space: ";
    scanf("%d %d", &num1, &num2);

    result = calculator(num1, num2, operation);
    if(result!=-1){
        cout << "The result is: " << result << endl;
    }else{
         cerr << "ERROR (Maybe a division by ZERO)!" << endl;
    }


    return 0;
}

