#include <stdio.h>

int main(void) {
    char name[50];

    printf("Hello, World!\n");

    printf("Adin ne? ");
    scanf("%49s", name);

    printf("Merhaba, %s! C ile ilk programina hos geldin.\n", name);
    return 0;
}
