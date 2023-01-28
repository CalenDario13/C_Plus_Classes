#include <iostream>
#include <cmath>
using namespace std;

consteval double GetPi(){
    return 22.0 / 7;
    }

double CircleArea(double radious){
    return GetPi() * pow(radious, 2);
}

double CircleCircumference(double radious){
    return 2* GetPi() * radious;
}

int main(){


    // Int Variables Size
    cout << endl;
    cout << "unsigned int has size of " << sizeof(unsigned int) << " Bytes" << endl;
    cout << "int has size of " << sizeof(int) << " Bytes" << endl;
    cout << "long int has size of " << sizeof(long int) << " Bytes" << endl;
    cout << endl;

    // Compute Circle Area:
    constexpr double pi { GetPi() };
    double radious {}, area{}, circumference{};
    cout << "Give me the radious: ";
    cin >> radious;

    area = CircleArea(radious);
    circumference = CircleCircumference(radious);
    cout << "The Area of the Circle is: " << area << endl;
    cout << "The Circumference of the Circle is: " << circumference << endl;

    return 0;
}