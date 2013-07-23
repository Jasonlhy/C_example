#include <stdio.h>

int main(void){
    int a = 58;
    int *p = &a;
    int **q = &p;

    printf("Address of p: %p\n",p);
    printf("Address of *q: %p\n",*q);
    printf("a: %d \n", a);
    printf("*p: %d \n", *p);
    printf("**q: %d \n", **q);
}
