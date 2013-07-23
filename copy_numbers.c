#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fpIn;
    FILE *fpOut;
    int numIn;

    fpIn = fopen("/home/jason/Desktop/numbers.txt", "r");
    // cannot find the file
    // NUll = not found
    if (!fpIn) {
       printf("Could not open input file \a\n");
       exit(101);
    }

    fpOut = fopen("/home/jason/Desktop/copy_numbers.txt", "w");
    // cannot find the file
    if (!fpOut) {
       printf("Could not open output file \a\n");
       exit(102);
    }

    // each time, read 1 digits from input file
    // and print to output file line by line
    while ((fscanf(fpIn, "%d", &numIn)) == 1){
        fprintf(fpOut, "%d\n", numIn);
    }

    int closeResult = fclose(fpOut);
    if (closeResult == EOF) {
        printf("Cound not close outputfile \a\n");
        exit(201);
    }

    printf("File copy complete\n");
    fclose(fpIn);
    return 0;

    return 0;
}
