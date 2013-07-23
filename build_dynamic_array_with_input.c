#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FLUSH while (getchar() != '\n')

int main(void){
    char input[81];
    char **pNames;

    int size;
    int namesIndex;

    printf("How many names you want to input?");
    scanf("%d", &size);
    FLUSH;

    /* One extra element for loop control */
    pNames = (char **)calloc(size+1, sizeof(char *));
    namesIndex = 0;
    while (namesIndex < size && fgets(input, sizeof(input), stdin)){
        *(pNames + namesIndex) = (char *)calloc(strlen(input)+1, sizeof(char));
        strcpy(*(pNames + namesIndex), input);
        namesIndex++;
    }

    *(pNames + size) = NULL;
    namesIndex = 0;
    printf("The name you input: \n");
    while (pNames + namesIndex){
        printf("%3d %s", namesIndex, *(pNames + namesIndex));
        namesIndex++;
    }

    return 0;
}
