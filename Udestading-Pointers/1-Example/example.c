#include <stdio.h>
#include <stdlib.h>

static int a = 0; // Static Alocation

void increment(void){
    int b = 0; // Local Vaiable, Auto Alocation
    static c = 0; // Local Variable, Static Alocation

    printf("a: %d, b: %d, c: %d\n", a, b, c);
    a++;
    b++;
    c++;
}

int main (void) {
    system("cls");
    for(int i = 0;  i < 5; i++)
    increment();
    system("pause");
    return 0;
}