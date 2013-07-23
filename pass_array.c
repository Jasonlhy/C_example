#include <stdio.h>

void pass_by_array(int x[]);
void pass_by_pointer(int *x);
int main(void){
    int i;
    int base[5] = {3, 7, 2, 4, 5};
    printf("address of first element in main %p\n", &base[0]);
    printf("address of array in main %p \n\n", &base);
    pass_by_array(base);
    pass_by_pointer(base);
}

/* Pass in the array as type of int x [] */
void pass_by_array(int x[]){
    printf("address of first element passed in: %p \n", &x[0]);
    printf("address of array passed in: %p \n\n", x);
}

/* Pass in the array as type of int pointer*/
void pass_by_pointer(int *x){
    printf("passing in array by pointer, address: %p",x);
}
