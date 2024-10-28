#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int x = 5;
    char  c = 'D';

    printf("%d, %c\n", x, c);

    printf("Size of int x is: %zu\n", sizeof(x));
    printf("Size of char c is: %zu\n", sizeof(c));

    return 0;
}