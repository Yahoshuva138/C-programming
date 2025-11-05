#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Please enter two integers separated by space or newline\n");
        return 1;
    }
    printf("%d\n", a + b);
    return 0;
} 
