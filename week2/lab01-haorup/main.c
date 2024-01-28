// your includes go here - which one do we need? 
#include <stdio.h>



// add your function here
long power(int base, unsigned int n) {
    long power_result = 1;
    for (int i = 0; i < n; i++) {
        power_result = power_result * base;
    }
    return power_result;
}

// add your main here
int main() {
    int exponents = 10;
    int base = 2;
    long answer = 0;
    for (int j = 1; j <= exponents; j++) {
        answer = power(base, j);
        printf("2 to the power of %d is: %ld\n", j, answer);
    }
    return 0;
}


// inside main, call your function in a loop and print inside the loop
