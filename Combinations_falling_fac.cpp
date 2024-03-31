// Combinations with Falling factorial. 

#include <iostream>
#include <cassert>
#include <cmath>

int main();

int factorial(int n){
    if (n < 0){
        return 0;
    }

    int result{1};
    int i{2};

    while (n >= i ){
        result *= i;
        i++;
    }

    return result;
    }

int fall_factorial(int n, int k){
    if (n < 0 || k < 0 || n < k){
        return 0;
    }

    int result {1};
    int i{n};
    while (i > n-k){
        result *= i;
        i--;
    }

    return result;
}

int combination(int n, int k){
    if (n-k > k){
        assert(fall_factorial(n, k) < INT_MAX && factorial(k) < INT_MAX);
        return fall_factorial(n, k)/ factorial(k);
    }
    assert(fall_factorial(n, n-k) < INT_MAX && factorial(n-k) < INT_MAX);
    return fall_factorial(n, n-k)/ factorial(n-k);
}

int main(){
    int n{};
    int k{};

    std::cout << "Enter a value for n: ";
    std::cin >> n;

    std::cout << "Enter a value for k: ";
    std::cin >> k;

    assert(n >= 0 && n < 13);
    assert(k >= 0 && k < 13);

    std::cout << n << "! = " << fall_factorial(n,n) << std::endl;
    std::cout << n << " choose " << k << " is " << combination(n, k);

    return 0;

}