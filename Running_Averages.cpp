#include <iostream>

//This code computes the overall average for each input double n inputted by the user.
//if 0 is entered; the average is returned and the program ends.

int main();

double running_average(){
    double average{};
    int count{1};

    while (true){
        double n{};
        
        std::cout << "Enter a (new) number to average: " << std::endl;
        std::cin >> n;

        if (n == 0){
            break;
        }

        average = (average + n)/count;

        std::cout << "The overall average is: " << average << std::endl;

        count++;
    }
    return average;
}

int main (){
    std::cout << running_average() << std::endl;
 return 0;
}
