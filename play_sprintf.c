#include <stdio.h>
#include <stdlib.h>

int main(void){
    /*char *dlrs = (char *)malloc(37);*/
    char *dlrs = (char *)calloc(37, sizeof(char));
    sprintf(dlrs, "%.2f", 12.222);
    printf("%s", dlrs);

    return 0;
}
