#include <stdio.h>

void change_to_one_with_pointer(int *x);
void change_to_one_no_pointer(int x);
int main(void){
    int i;
    int base[5] = {3, 7, 2, 4, 5};
    for (i = 0; i < 5; i++) {
        printf("Before change to one\n");
        printf("element at index %d: %d\n", i, base[i]);
    }
    for (i = 0; i < 5; i++) {
        change_to_one_no_pointer(base[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("After change to one no pointer\n");
        printf("element at index %d: %d\n", i, base[i]);
    }
    for (i = 0; i < 5; i++) {
        change_to_one_with_pointer(&base[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("After change to one with pointer\n");
        printf("element at index %d: %d\n", i, base[i]);
    }
}

void change_to_one_with_pointer(int *x){
    *x = 1;
}
void change_to_one_no_pointer(int x){
    x = 1;
}
