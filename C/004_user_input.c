#include <stdio.h>

int main() {
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("You are %d years old.\n", age);
    printf("Next year you will be %d.\n", age + 1);

    return 0;
}
