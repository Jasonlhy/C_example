#include <stdio.h>
#include <stdlib.h>

int **build_table(int j, int k);
int **one_to_two(int *ary, int j, int k, int n);
void printData(int **table, int j, int k);

int main(void){
    int **table;
    int j = 3;
    int k = 3;

    int nums [] = {1,2,3,4,5,6,7,8,9};
    table = one_to_two(nums, j, k, 9);
    printData(table, j, k);

    return 0;
}

int **build_table(int j, int k){
    /* Local declartion*/
    int i;

    int **table = (int **)calloc(j, sizeof(int *));
    for (i = 0; i < j; i++) 
        table[i] = (int *)calloc(k, sizeof(int));

    return table;
}

int **one_to_two(int *ary, int j, int k, int n){
    /* Local definition */
    int **table;
    int *copyPtr;
    int rowCnt;
    int colCnt;

    if (n != j * k) {
        return NULL;
    }
    else {
        table = build_table(j, k);
        for (rowCnt = 0, copyPtr = ary; rowCnt < j; rowCnt++) {
            for (colCnt = 0; colCnt < k; colCnt++) {
                table[rowCnt][colCnt] = *copyPtr;
                copyPtr++;
            }
        }
    }

    return table;
}

void printData(int **table, int j, int k){
    int rowCnt;
    int colCnt;

    for (rowCnt = 0; rowCnt < j; rowCnt++) {
        printf("\nAt row: %d \n", rowCnt + 1);
        for (colCnt = 0; colCnt < k; colCnt++) {
            printf("%d ", table[rowCnt][colCnt]);
        }
        printf("\n");
    }
}
