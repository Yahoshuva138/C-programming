#include <stdio.h>
#include <math.h>

int main(void) {
    long n;
    if (scanf("%ld", &n) != 1) {
        fprintf(stderr, "Enter an integer\n");
        return 1;
    }
    if (n <= 1) { printf("%ld is not prime\n", n); return 0; }
    if (n <= 3) { printf("%ld is prime\n", n); return 0; }
    if (n % 2 == 0) { printf("%ld is not prime\n", n); return 0; }
    long limit = (long)sqrt((double)n);
    for (long i = 3; i <= limit; i += 2) {
        if (n % i == 0) { printf("%ld is not prime\n", n); return 0; }
    }
    printf("%ld is prime\n", n);
    return 0;
} 
