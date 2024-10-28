#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct products {
    char name[50];
    int code;
    float price;
    int count;
};

int main() {
    struct products product[2];

    // Random numbers generate
    srand(time(NULL));

    for(int i = 0; i < 2; i++){
        printf("Tab the name: ");
        scanf("%s", product[i].name);

        product[i].code = rand() % 1000;

        printf("Tab the price: ");
        scanf("%f", &product[i].price);

        printf("Tab the count: ");
        scanf("%d", &product[i].count);
    }

    for(int i = 0; i < 2; i++) {
        printf("Product %d - Name: %s, Code: %d, Price: %.2f, Count: %d\n", 
               i + 1, product[i].name, product[i].code, product[i].price, product[i].count);
    }

    return 0;
}