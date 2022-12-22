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
    
    // Switch condition can be based only on int types and enums
    switch (tool){
        case Pen: {
            std::cout << "Active tool is pen\nMoving on" << std::endl;
        }
        break;

        case Marker: {
            std::cout << "Active tool is marker\nMoving on" << std::endl;
        }
        break;

        case Eraser: {
            std::cout << "Active tool is eraser\nMoving on" << std::endl;
        }
        break;

        case Rectangle: {
            std::cout << "Active tool is rectangle\nMoving on" << std::endl;
        }
        break;

            case Circle: {
            std::cout << "Active tool is circle\nMoving on" << std::endl;
        }
        break;

            case Ellipse: {
            std::cout << "Active tool is ellipse\nMoving on" << std::endl;
        }
        break;

        default: {
            std::cout << "NO MATCH FOUND." << std::endl;
        }
            break;

    }

    return 0;
}