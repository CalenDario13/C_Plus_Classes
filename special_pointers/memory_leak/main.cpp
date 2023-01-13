#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>

int CASH = 100;

void Play(int bet){
    
    /*
    This initialization is only for the example
    It does not make any sense to initialize this variable in the heap
    When we don not remove the variable at the end, it persists iun the heap
    and at each ehile step a new one is created increasing the occupied space
    */
    char* cards = (char*)std::malloc(3*sizeof(char));
    cards[0] = 'J'; cards[1] = 'Q'; cards[2] = 'K';
    std::cout << "Shuffling" << std::endl;
    std::srand(time(NULL)); // seeding

    for(int i = 0; i < 5; i++){
        int x {std::rand() % 3};
        int y {std::rand() % 3}; 
        int tmp { cards[x] };
        cards[x] = cards[y];
        cards[y] = tmp;
    }

    int playerGuess;
    std::cout << "Where is the Queen (1st, 2nd or 3rd position)? ";
    std::cin >> playerGuess;
    if( cards[playerGuess - 1] == 'Q'){
        CASH += 3*bet;
        std::cout << "The Result is: '" << cards[0] <<cards[1] << cards[2] << "'"  << " YOU WON!"<< std::endl;
        std::cout << "Your Balance is: " << CASH << std::endl;
    }else{
        CASH -= bet;
        std::cout << "Result is: '" << cards[0] <<cards[1] << cards[2] << "'" << " YOU LOST!"  << std::endl;
        std::cout << "Your Balance is: " << CASH << std::endl;
    }

    free(cards); // Without this the memory occupied will increase at each play.
    cards = nullptr;
}

int main(){
    int bet;
    int will_to_play {1};
    
    while( ( CASH > 0 ) && will_to_play ){
        
        int bet;
        std::cout << "Current Balance: " << CASH << " How much do you want to bet? ";
        std::cin >> bet;

        if (bet == 0 || bet > CASH) break;
        else Play(bet);

        std::cout << "Do you want to play again (0-no, 1-yes)? ";
        std::cin >> will_to_play;

        std::cout << std::endl;
        std::cout << "********************************" << std::endl;
        std::cout << std::endl;

    }
    return 0;
}