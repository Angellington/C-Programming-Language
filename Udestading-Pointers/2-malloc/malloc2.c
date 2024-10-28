#include <stdio.h>
#include <stdlib.h>

/* Retorna um ponteiro para a regiao de memoria alocada ou NULL*/

int main() {
    int *x;

    x = malloc(sizeof(int)); // Informar os bytes;

    // Verificar se a alocação ocorreu

    if(x){
        printf("Success in Allocate memory\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    } else {
        printf("Error to Allocate memory!\n");
    }

    return 0;
}