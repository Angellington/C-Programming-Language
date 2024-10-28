#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int *pt_x;
    // Pointer pt_x there s a address memory of x
    pt_x = &x;
    *pt_x = 50;g

    // print the address stored in pt_x
    printf("Address of x: %p\n", *pt_x);


    return 0;
}