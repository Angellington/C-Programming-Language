#include <stdio.h>
#include <stdlib.h>

static char *d = "Your memories";

int main(void){
    system("cls");
    char *a = "Hall 2 to 900";
    static char *b = "Conquer the world";
    char *c = "Opposation";

    printf("a: %s, b: %s, c: %s\n", a, b, c);

    a = "Little Voice";
    b = "Howl";
    c = "lasah";
    d = "My end";

    printf("a: %s, b: %s, c: %s, d: %s\n", a, b, c, d);
    return 0;
}