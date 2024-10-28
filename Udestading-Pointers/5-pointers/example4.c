#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // v_num it s a variable than pointer by pointer
    int v_num = 10;

    // declarate to variable pointer
    int *ptr;

    // giving the address to variable v_num to pointer
    ptr = &v_num;

    printf("Using pointers\n\n");
    printf("Variable Content v_num: %d\n", v_num);
    printf("Addres of variable v_num: %x\n", &v_num);
    printf("Content to pointer variable ptr: %x", ptr);

    getch();
    return 0;
}