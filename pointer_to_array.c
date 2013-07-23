#include <stdio.h>

void pointer_to_whole_array(int (*passIn) []);
void pointer_to_integer(int *pToInt);
void pass_as_array(int passIn []);
int main(void){
    int i;
    int numbers [] = {1, 2, 3, 4, 5};
    printf("nubmers: %p\n", numbers);

    int (*pNumbers) []  = &numbers;
    printf("pNumbers: %p\n", pNumbers);    
    printf("value %d\n", **pNumbers);

    pointer_to_whole_array(&numbers);
    pointer_to_integer(numbers);
    pass_as_array(numbers);

    return 0;
}
void pointer_to_whole_array(int (*pToWhole) [5]){
    printf("\nPointer to whole array: \n");    
    printf("&pToWhole, %p\n", &pToWhole);    
    printf("pToWhole, %p\n", pToWhole);    
    printf("*pToWhole, %p\n", *pToWhole);    
    printf("pToWhole[0], %p\n", pToWhole[0]);    
    printf("*(pToWhole[0]) %d\n", *(pToWhole[0]));    
}

void pointer_to_integer(int *pToInt){
    printf("\nPointer to integer: \n");    
    printf("&pToInt, %p\n", &pToInt);    
    printf("pToInt, %p\n", pToInt);    
    printf("pToInt[0], %d\n", pToInt[0]);    
}
void pass_as_array(int array []){
    printf("\nPass as array\n");
    printf("&array %p\n", &array);    
    printf("array %p\n", array);    
}
