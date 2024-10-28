#include <stdio.h>
#include <stdlib.h>
/*STRUCT MODEL

struct ident {
    type var;
    type var;
    type var;
};

DECLARING

struct struct_name {
    type_field1 name_field1;
    type_field2 name_field2;
    ...
} var_stored_in_struct

*/

int main() {
    struct mystruct {
        char a;
        int b;
        float c;
    };

    struct address {
        char rua[50];
        char num[5];
        char CEP[8];
        char street[30];
    };



    return 0;
}