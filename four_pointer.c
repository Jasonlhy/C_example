#include <stdio.h>

int main(void){
    int a;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("Enter the number: ");
    scanf("%d", &a);
    printf("\nNumber: %d\n", a);

    printf("Enter the number: ");
    scanf("%d", p);
    printf("\nNumber: %d\n", *p);

    printf("Enter the number: ");
    scanf("%d", *q);
    printf("\nNumber: %d\n", **q);

    printf("Enter the number: ");
    scanf("%d", **r);
    printf("\nNumber: %d\n", ***r);

    return 0;
}
