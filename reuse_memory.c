#include <stdio.h>
#include <stdlib.h>

int main(void){
    int looper;
    int *ptr;

    for (looper = 0; looper < 5; looper++) {
        ptr = (int *)malloc(16);
        printf("Memory allocated at : %p\n", ptr);

        free(ptr);
    }

    return 0;
}
