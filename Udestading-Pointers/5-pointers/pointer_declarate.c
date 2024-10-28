#include <stdio.h>
#include <stdlib.h>

int main() {
    /* (Variable Type) * (Name of Variable)*/
    int *p;
    float *q;
    char *r;

    // Initalize the pointers to NULL, to valid them in memory
    p = 20;
    q = 14,3;
    r = 'Hello';

    // Operators of Pointers
    /* & - Unary - Obtain a Memory Address of Variable*/
    printf("Address of p: %p\n", (void*)p);
    printf("Address of q: %p\n", (void*)q);
    printf("Address of r: %p\n", (void*)r);

    return 0;
}