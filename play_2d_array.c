#include <stdio.h>
#include <stdlib.h>

int showLinearLetter(char **table);
int show2dLetter(char * (* table)[2]);
int showLinearNumber(int *numbers);
int show2dNumber(int (*numbers)[]);

int main(void){
    int linearNumbers[3] = {1, 2, 3};
    int numbers[3][2] = {{1,2}, {3,4}, {5,6}};
    char *linearLeter[3] = {"A", "B", "C"};
    char *letters[3][2] = {{"A","B"}, {"C","D"}, {"E","F"}};
    showLinearLetter(linearLeter);
    show2dLetter(letters);
    showLinearNumber(linearNumbers);
    show2dNumber(numbers);
    return 0;
}

int showLinearLetter(char **table){
    int i;
    for (i = 0; i<3; i++){
        printf("%s", table[i]);
    }
}
/* table is a pointer to a pointer which point to string pointer */
int show2dLetter(char * (* table)[2]){
    int i;
    int j;
    printf("Show content 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j<2; j++){
            printf("%s", table[i][j]);
        }
        printf("\n");
    }
}

int showLinearNumber(int *numbers){
    int i;
    int j;
    printf("Show content 2:\n");
    for (i = 0; i < 3; i++) {
        printf("%d", numbers[i]);
    }
}

int show2dNumber(int (* numbers)[2]){
    int i;
    int j;

    printf("Show content 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j<2; j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }
}
