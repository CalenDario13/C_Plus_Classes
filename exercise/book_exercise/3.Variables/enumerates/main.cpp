#include <iostream>
using namespace std;


int main(){

    // UNSCOPED ENUMERATION:
    enum CardsFigure {Jack = 8, 
                      Queen,
                      King, 
                      Ace};

    cout << "Jack " << Jack << endl;
    cout << "Queen " << Queen << endl;
    cout << "King " << King << endl;
    cout << "Ace " << Ace << endl;

    cout << endl;
    int aceValue {Ace}; // ONLY POSSIBLE WITH UNSCOPED ENUMERATION (AVOID THIS!)
    cout << "The ace value is: " << aceValue << endl;

    // SCOPED ENUMERATION (do not allow int assignment)
    enum class CardinalDirections {North=0, South, East, West};
    CardinalDirections southDir { CardinalDirections::South };
    
    return 0;
}