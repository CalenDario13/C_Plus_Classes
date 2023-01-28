#include <iostream>
#include <string>
using namespace std;


int main(){

    enum Square{
                Empty = 0,
                Pawn,
                Rook,
                Knight,
                Bishop,
                King,
                Queen
                };

    Square chessBoard[8][8];

    // Initialize the square as a starting point
    chessBoard[0][0] = chessBoard[0][7] = Rook;
    chessBoard[7][0] = chessBoard[7][7] = Rook;

    cout << chessBoard[0][0] << endl;

    return 0;
}