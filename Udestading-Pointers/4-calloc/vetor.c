#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Alocar vetor dinamico*/
int main(){
    int i, tam, *vet;

    printf("Tab a vetor size: ");
    scanf("%d", &tam); 
    srand(time(NULL));


    vet = malloc(tam * sizeof(int)); // Alocando memoria para o tamanho

    if(vet){
        printf("Memory allocated!!\n");
        for(i = 0;  i < tam; i++)
            *(vet + i) = rand() % 100;

        for(i = 0;  i < tam; i++)
            printf("%d ", *(vet + i));
        printf("\n");
    } else {
        printf("Error to allocate\n");
    }
    
    return 0;
}