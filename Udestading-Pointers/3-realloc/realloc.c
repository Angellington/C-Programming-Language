#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    int newSize;

    printf("Type array size: ");
    scanf("%d", &n);

    // malloc -> memory allocation
    arr = (int *) malloc(n * sizeof(int));

    if(!arr){
        printf("Not possible to create memory for this array\n");
        return 1;
    }


    for(int i = 0; i < n; i++){
        arr[i] = i;
    }

    newSize = 2 * n;

    arr = (int *) realloc(arr, newSize * sizeof(int));

    if(!arr){
        printf("Not possible to add memory for this array\n");
        return 1;
    }

      for(int i = 0; i < newSize; i++){
        arr[i] = i;
    }

    //print

    for(int i =  0; i < newSize; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);

    return 0;
}