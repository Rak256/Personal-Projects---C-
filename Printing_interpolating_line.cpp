#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

// This function prints the equation for an interpolated line when arguments x1, y1, x2, and y2 are given. 
// The arguments with x and y in the identifiers represent the x and y co-ordinate of each point in the cartesian plane, respectively.
// This program also prints the graph of an integer approximation (using std::round) of the inputted line. The line is visible
// if it has integer coordinates in the range (-10, 10) and domain (-10, 10)

int main();
void line(double x1, double y1, double x2, double y2);
void graph(int x1, int y1, int x2, int y2);

void graph(int x1, int y1, int x2, int y2){
    // if gradient is undefined 
    if (x2-x1 == 0){
         for (int y{100}; y >= -100; --y){
      for (int x{-100}; x <= 100; ++x){
        if (x == 0 && y == 0){
          std::cout << "+";
        } 

        else if (x == 0){
          std::cout << "|";
        }

        else if (y == 0){
          std::cout << "-";
        }

        else if (x == x1){
           std::cout << "|";
    }
        else{
          std::cout << " ";
        }
  }
      std::cout << std::endl;
}
return;
    } 
// if gradient is defined
    int m{(y2-y1)/(x2-x1)};

    for (int y{100}; y >= -100; --y){
      for (int x{-100}; x <= 100; ++x){
        if (x == 0 && y == 0){
          std::cout << "+";
        } 

        else if (x == 0){
          std::cout << "|";
        }

        else if (y == 0){
          std::cout << "-";
        }

        else if (y*(x2-x1) == (y2-y1)*(x - x1) + y1*(x2-x1)){
            if (m > 0){
          std::cout << "/";
            }

            else if (m == 0){
                std::cout << "-";
            }
            else{
                std::cout << "\\";
            }
    }
        else{
          std::cout << " ";
        }
  }
      std::cout << std::endl;
}
  
}

void line(double x1, double y1, double x2, double y2){
    // vertical line
     if (x1 == x2){
        std::cout << "x = " << x1;
        return;
    }
//if the line is not horizontal
    if (y2-y1 != 0){

    double m{(y2-y1)/(x2-x1)};
    
    if(m == 1){
        std::cout << "y = x ";
    }
    else if (m == -1){
        std::cout << "y = -x ";
    }
    else{
    std::cout << "y = " << m << "*x";
    }

    if ((y1 - m*x1) < 0){
        std::cout << " - " << -(y1 - m*x1);
        return;
    }

    else if ((y1 - m*x1) > 0){
        std::cout << " + " << y1 - m*x1;
        return; 
    }

    }
// if line is horizontal
    else {
        if (y1 == 0){
            std::cout << "y = " << 0;
            return;
        }
        else{
        std::cout << "y = "<< y1;
        return;
        }
    }
}

int main() {
    while (true){

    double x1{};
    double x2{};
    double y1{};
    double y2{};
    bool loop{};
    std::cout << "Enter the x coordinate of the first point: ";
    std::cin >> x1;
    std::cout << "Enter the y coordinate of the first point: ";
    std::cin >> y1;
    std::cout << "Enter the x coordinate of the second point: ";
    std::cin >> x2;
    std::cout << "Enter the y coordinate of the second point: ";
    std::cin >> y2;

    if ((x1 == x2) && (y1 == y2)){
        std::cout << "Please enter 2 different points on the Cartesian Plane"<< std::endl;
        loop = true;
    }

    else{

    line (x1, y1, x2, y2);
    
    std::cout << std::endl;
    
    graph (std::round(x1), std::round(y1), std::round(x2), std::round(y2));

    std::cout << std::endl;
    
    std::cout << "Do you want to print another line? Type 1 for yes, 0 for no: ";
    std::cin >> loop;

    }

    if (loop == false){
        break;
    }

    }

    return 0;
}
