#include <stdio.h>
#include <stdlib.h>

/* Alocaçao dinamica de memoria com a função calloc - retorna tbm nnulo se nao der certo*/

int main() {
    char *x;

    // x = malloc(sizeof(int)); // Informar os bytes; (recebe a quantidade de bytes)
    x = calloc(1, sizeof(char)); // 2 Param: (Quantidade elemento e Tamanho da memoria)

    if(x){
        printf("Success in Allocate memory\n");
        printf("x: %s\n", *x);
        *x = 'H';
        printf("x: %s\n", *x);
    } else {
        printf("Error to Allocate memory!\n");
    }

    return 0;
}