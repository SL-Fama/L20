#include "dmath.hpp"
#include <iostream>

long long factorial(int a) {
    if (a < 0) {
        std::cerr << "Error! Factorial of a negative number doesn't exist." << std::endl;
        return -1;
    } else if (a == 0) {
        return 1;
    } else {
        int result = 1;
        for(int i = 1; i <= a; ++i) {
            result *= i;
        }
        return result;
    }
}