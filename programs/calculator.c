#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter an expression (e.g. 3.5 + 4.2): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    switch (op) {
        case '+': printf("%g\n", a + b); break;
        case '-': printf("%g\n", a - b); break;
        case '*': printf("%g\n", a * b); break;
        case '/':
            if (b == 0) { fprintf(stderr, "Division by zero\n"); return 1; }
            printf("%g\n", a / b);
            break;
        default:
            fprintf(stderr, "Unsupported operator: %c\n", op);
            return 1;
    }

    return 0;
} 
