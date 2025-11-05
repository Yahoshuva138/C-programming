#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Enter a positive integer\n");
        return 1;
    }
    unsigned long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        printf("%llu", a);
        if (i + 1 < n) printf(" ");
        unsigned long long next = a + b;
        a = b; b = next;
    }
    printf("\n");
    return 0;
} 
