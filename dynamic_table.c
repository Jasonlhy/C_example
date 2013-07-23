#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int **buildTable(void);
void fillTable(int **table);
void processTable(int **table);
int smaller(int first, int second);
int larger(int first, int second);
int rowMinimum(int *rowPtr);
int rowMaximum(int *rowPtr);
float rowAverage(int *rowPtr);

int main(void){
    int **table;
    table = buildTable();
    fillTable(table);
    processTable(table);

    return 0;
}

int **buildTable(void){
    int rowNum;
    int colNum;
    int **table;
    int row;

    printf("\nEnter the number of rows in the table");
    scanf("%d", &rowNum);
    table = (int **)calloc(rowNum + 1, sizeof(int *));
    for (row = 0; row < rowNum; row ++){
        printf("Enter number of integers in row %d: ", row + 1);
        scanf("%d", &colNum);
        table[row] = (int *)calloc(colNum + 1, sizeof(int));
        table[row][0] = colNum;
    }
    table[row] = NULL;

    return table;
}

void fillTable(int **table){
    int row = 0;
    int column;

    printf("\n ===================================");
    printf("\n Now we fill the table. \n");
    printf("\n For each row enter the data");
    printf("\n and press the return: ");
    printf("\n ===================================");

    while (table[row] != NULL){
        printf("n row %d (%d integers) ====>", row + 1, table[row][0]);
        for (column = 1; column <= *table[row]; column++){
            scanf("%d", table[row] + column);
        }
        row++;
    }
}

void processTable(int **table){
    int row =0;
    int rowMin;
    int rowMax;
    float rowAve;

    while (table[row] != NULL){
        rowMin = rowMinimum(table[row]);
        rowMax = rowMaximum(table[row]);
        rowAve = rowAverage(table[row]);

        printf("\n\nThe statistic for row %d ", row + 1);
        printf("\nThe minimum: %5d", rowMin);
        printf("\nThe maximum: %5d", rowMax);
        printf("\nThe average: %8.2f", rowAve);
        
        row++;
    }
}

int smaller(int first, int second){
    int result;

    result = (first < second)?first:second;

    return result;
}

int larger(int first, int second){
    int result;

    result = (first > second)?first:second;
    
    return result;
}

int rowMinimum(int *rowPtr){
    int rowMin = INT_MAX;
    int column;

    for (column = 1; column <= *rowPtr; column++){
        rowMin = smaller(rowMin, *(rowPtr + column));
    }


    return rowMin;
}

int rowMaximum(int *rowPtr){
    int rowMax = INT_MIN;
    int column;

    for (column = 1; column <= *rowPtr; column++){
        rowMax = larger(rowMax, *(rowPtr + column));
    }

    return rowMax;
}

float rowAverage(int *rowPtr){
    float total=0;
    float rowAve;
    int column;

    for (column = 1; column <= *rowPtr; column++){
        total += (float)*(rowPtr + column);
    }

    rowAve = total / *rowPtr;

    return rowAve;
}
