#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Fist - To Declarate Struct*/
    // struct address x;
    /*Second - To Declarate Strcut*/
    struct book {
        char name[30];
        char actor[50];
        int pages;
        float price;
    } book1, book2, book3;
    /*Third - To Declarate Struct*/
    struct {
        char name[30];
        char actor[50];
        int pages;
        float price;
    } manga;

    return 0;
}