#include <iostream>

// This is an efficient function for finding every prime number upto but not including an input natural number n.
// This code does not utilize dynamic memory allocation and therefore doesn't use arrays and mathematical techniques such as
//the Sieve of Eratosthenes algorithm.

int main();
//Function Declaration
void n_primes(unsigned int n);
//Function Definition
void n_primes(unsigned int n){
    for (int j{2}; j < n; ++j ){
        bool n_is_prime{1};
        
        for (int i{2}; n_is_prime && i*i <=34; ++i){
            if (j % 2 == 0 || j % i == 0  ){
                n_is_prime = 0;
            }
        }

        if (n_is_prime){
            std::cout << j << std::endl;
        }
    }

}

int main(){
    int n{};
    std::cout << "Enter the upper bound 'n': ";
    std::cin >> n;

    n_primes(n);

    return 0;
}