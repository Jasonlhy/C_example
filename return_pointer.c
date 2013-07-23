#include <stdio.h>

int *smaller(int *px, int *py);
int main(void){
    int a;
    int b;
    int *p;

    scanf("%d %d", &a, &b);
    p = smaller(&a, &b);
    printf("Smaller one: %d", *p);
}
int *smaller(int *px, int *py){
    return (*px > *py? py : px);
}
