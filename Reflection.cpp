#include <iostream>
#include <string>

//This code prints a number entered by the user, a pipe (or a mirror), and then the lateral inversion of the number.


int main();

void reflect(int n){
    bool dash{n < 0};
    std::cout << n << " | ";

    while (n != 0){
        int i{n % 10};
        
        if (dash){
            std::cout << -i;
        }

        else{
        std::cout << i;
        }

        n /= 10;
    } 

    if (dash){
        std::cout << "-";
    }
}

int main(){
    int n{};
    std::cout << "Enter the number you want to reflect: ";
    std::cin >> n;

    reflect(n);
}
