#include <iostream>
#include <iomanip>


// Tools
const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };


int main(){

    int tool;
    std::cout << "Choose a tool:\nPen: 10\nMarker: 20\nEraser: 30\nRectangle: 40\nCircle: 50\nEllipse: 60" 
    << std::endl;
    std::cin >> tool;

    if (tool == Pen) {
        std::cout << "Active tool is pen\nMoving on" << std::endl;
        //Do the actual painting
    }
    else if (tool == Marker) {
        std::cout << "Active tool is Marker\nMoving on" << std::endl;
    }
    else if (tool == Eraser) {
        std::cout << "Active tool is Eraser\nMoving on" << std::endl;
    }
    else if (tool == Rectangle) {
        std::cout << "Active tool is Rectangle\nMoving on" << std::endl;
    }
    else if (tool == Circle) {
        std::cout << "Active tool is Circle\nMoving on" << std::endl;
    }
    else if (tool == Ellipse) {
        std::cout << "Active tool is Ellipse\nMoving on" << std::endl;
    } else{
        std::cout << "The Tool " << tool << " is not recognized." << std::endl;
    }
    
    return 0;
}