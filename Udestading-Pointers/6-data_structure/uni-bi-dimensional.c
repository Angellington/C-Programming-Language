#include <stdio.h>
#include <stdlib.h>

int UniDimentional() {
    /*Unidimensional vector 1D*/
    int arr[5]; //Declares an array of 5 
    
    // Acessing Values
    arr[0] = 10;
    int value = arr[1];

    return 0;
}

int BiDiometional(){
    /* Bidimentional vector 2D, can be like grid or a table*/
    int matrix[3][4]; // Declares a 2D array  with 3rows and 4 columns

    // Accessing Elements;
    matrix[0][0] = 5;
    int value = matrix[1][2]; // Retrieves the element in second row and third column
}

int main() {
    // Unidimentional Example
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }

    printf("\n\n");

    // Dimentional Example
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}