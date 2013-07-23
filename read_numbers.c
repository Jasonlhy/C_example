#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fpIn;
    int numIn;

    fpIn = fopen("/home/jason/Desktop/numbers.txt", "r");

    // cannot find the file
    if (fpIn == NULL) {
       printf("Could not open file \a\n");
       exit(101);
    }

    // each time, read 1 digits and print it
    while ((fscanf(fpIn, "%d", &numIn)) == 1){
        printf("%d ", numIn);
    }

    // close the file for good practice
    fclose(fpIn);

    return 0;
}
