#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>


int main();

double geometric_sum(double a, double r, int n){
if (n < 0 || r == 1){
    return 0;
}
else if(r == 1)
return (a*(std::pow(r,n+1)-1.0))/(r-1.0) ;
}