#include <stdio.h>

int main(void){
    char c;
    int i;

    printf("address of char: %p, size: %d \n", &c, sizeof(c));
    printf("address of int: %p, size: %d \n", &i, sizeof(i));

    return 0;
}
