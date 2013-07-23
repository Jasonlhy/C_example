#include <stdio.h>

int main(void){
    int numOfint=10;
    int *array[10];
    int i;

    for(i=0; i<numOfint ;i++){
        printf("input int %d: ", i);
        scanf(" %d", &array[i]);
    }

    printf("array[0] value: %d\n", *array[0]); 
    printf("array[0] addr: %u\n", array[0]);

    return 0;
}
