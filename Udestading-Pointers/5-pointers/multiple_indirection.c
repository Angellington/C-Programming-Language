#include <stdio.h>
#include <stdlib.h>

int main() {
    int ** pt2; // Pointer to pointer of integer
    int * pt1; // Pointer to type pointer
    int x = 10;

    pt2 = &pt1;
    pt1 = &x;

    *pt1 = 30;
    **pt2 = 50;

    printf("%d, %d\n", *pt1, *pt2);

    return 0;
}