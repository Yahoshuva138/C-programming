#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i) result *= i;
    return result;
}

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) {
        fprintf(stderr, "Please enter a non-negative integer\n");
        return 1;
    }
    printf("%llu\n", factorial(n));
    return 0;
} 
