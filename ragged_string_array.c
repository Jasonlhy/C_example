#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ***getTable();
void printTable(char ***table);

int main(void){
    char ***table = getTable();
    printf("Back to the main, address at 0,0 : %p\n", **table);
    printf("value at 0,0 : %s\n", **table);
    printf("value at 0,1 : %s\n", table[0][1]);
    printTable(table);
    return 0;
}

char ***getTable(){
    int i;
    int j;
    int row;
    int col;
    char str[81]; // temp input location

    /* Number of row */
    printf("Enter number of row:");
    scanf("%d", &row);

    /* Create table */
    char ***table = (char ***)calloc(row+1, sizeof(char **));
    for (i = 0; i< row; i++){
        printf("Enter number of column at row %d:", i);
        scanf("%d", &col);
        table[i] = (char **)calloc(col+1, sizeof(char *));

        /* Column */
        for (j=0; j<col; j++){
            printf("Enter the data for row: %d, column: %d\n", row, j);
            scanf("%s", str);
            table[i][j] = (char *)malloc(81);

            strcpy(table[i][j], str);
        }
        table[i][col]=NULL;
    }

    *(table + row) = NULL;

    return table;
}

void printTable(char ***table){
    char ***pRow = table;
    char **pCol;

    /* The value of the address pointing to is not null */
    /* The address of pointer is always not to be NULL unless you assign it*/
    while (*pRow != NULL){
        pCol = *pRow;
        while (*pCol != NULL){
            printf("%s", *pCol);
            pCol++;
        }
        printf("\n");
        pRow++;
    }
}
