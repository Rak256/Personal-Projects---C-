#include <iostream>

// This is an efficient function for finding every prime number upto but not including an input natural number n.
// This code does not utilize dynamic memory allocation and therefore doesn't use arrays and mathematical techniques such as
//the Sieve of Eratosthenes algorithm.

int main();
//Function Declaration
void n_primes(unsigned int n);
//Function Definition
void n_primes(unsigned int n){
// No prime numbers before 2 
    if ( n > 2){
    std::cout << 2 << std::endl;
// No even number except 2 is prime. Initialize loop variable at 3 and make step size 2 (only check odd numbers). 
    for (int j{3}; j < n; j +=2 ){
        bool n_is_prime{1};
        
        for (int i{3}; n_is_prime && i*i <= j; ++i){
            if ( j % i == 0  ){
                n_is_prime = 0;
            }
        }

        if (n_is_prime){
            std::cout << j << std::endl;
        }
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
