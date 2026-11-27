#include <stdio.h>

int main() {
    int a = 17;
    int b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    float result = (float)a / b;
    printf("a / b (float) = %.2f\n", result);

    return 0;
}
