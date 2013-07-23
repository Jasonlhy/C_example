#include <stdio.h>

int main(void){
    char a;
    char b;
    printf("address of a,b : %p %p\n\n", &a, &b);

    a = 'a';
    a = 'b';
    printf("After assign the values of a,b \n");
    printf("address of a,b : %p %p\n", &a, &b);

    return 0;
}
