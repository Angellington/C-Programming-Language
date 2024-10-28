#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    float media;
};

int main() {
    struct student students[5];

    for(int i = 0; i < 5; i++){
        printf("Set name: ");
        scanf("%s", students[i].name);

        printf("Set age: ");
        scanf("%d", &students[i].age);

        printf("Set media: ");
        scanf("%f", &students[i].media);
    }

    for(int i = 0; i < 5; i++){
        printf("Student %d - Name: %s, Age: %d, Media: %.2f\n",
        i + 1, students[i].name, students[i].age, students[i].media);
    }

    return 0;
}