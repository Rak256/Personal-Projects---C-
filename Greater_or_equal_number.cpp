// Code to check if user has entered the right number

#include <iostream>
#include <string> 

int get_value_no_less_than( std::string text, int lower_bound );

int main();

int get_value_no_less_than( std::string text, int lower_bound ){
    int n{};
    std::cout << text;
    std::cin >> n;
    while (n < lower_bound){
        std::cout << text;
        std::cin >> n;
    }

    return n;
}

int main(){
    int lower_bound{};
    std::cout << "Enter a lower_bound: ";
    std::cin >> lower_bound;

    int result = get_value_no_less_than("Enter a number greater than the lower bound: ", lower_bound);
    
    std::cout << "The greater number that you entered is " << result;
}