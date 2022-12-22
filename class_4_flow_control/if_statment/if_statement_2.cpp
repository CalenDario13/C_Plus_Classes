#include <iostream>
#include <iomanip>

int main(){

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    if ( green && !police_stop ){
        std::cout << "You can GO through!" << std::endl;
    } else{
        std::cout << "STOP!" << std::endl;
    }

    if (yellow && !police_stop){
        std::cout << "You can GO through with attention!" << std::endl;
    } else{
        std::cout << "STOP!" << std::endl;
    }

    if (red || police_stop){
        std::cout << "STOP!" << std::endl;
    } else{
        std::cout << "You can GO through with attention!" << std::endl;
    }

    return 0;
}