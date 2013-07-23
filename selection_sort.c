/* Reference to book p.493 */
#include <stdio.h>
#define SIZE 25

int *getData (int *pAry, int arySize);
void selectSort (int *pAry, int *last);
void printData (int *pAry, int *last);
int *smallest (int *pAry, int *pLast);
void exchange (int *current, int *smallest);

int main(void){
    int ary[SIZE];
    int *pLast;

    pLast = getData(ary, SIZE);
    selectSort(ary, pLast);
    printData(ary, pLast);

    return 0;
}

int *getData (int *pAry, int arySize){
    int ioResult;
    int readCnt = 0;
    int *pFill = pAry;

    // read a digit
    // write into the element of the array
    do {
        printf("Please enter number or <EOF>: ");
        ioResult = scanf("%d", pFill);

        // when the program has read a digit
        // move the pointer to the next input memory
        if (ioResult == 1) {
            readCnt++;
            pFill++;
        }

    // continue to read a digit when there is no input error
    // or did not eneter all array's element
    } while (ioResult == 1 && readCnt < arySize);

    printf("\n\n%d numbers read. ", readCnt);
    return (--pFill);
}
void selectSort (int *pAry, int *last){
    int *pWalker;
    int *pSmallest;

    for (pWalker = pAry ; pWalker < last ; pWalker++) {
        pSmallest = smallest(pWalker, last);
        exchange(pWalker, pSmallest);
    }
}
void printData (int *pAry, int *last){
    int nmbrPrt;
    int *pPrint;

    printf("\n\n Your data sorted are: \n");
    for (pPrint = pAry, nmbrPrt=0; pPrint<=last; pPrint++, nmbrPrt++ ){
        printf("\n# %02d %4d", nmbrPrt, *pPrint);
    }

    printf("\n\n End of List");
}
int *smallest (int *pAry, int *pLast){
    int *pLooker;
    int *pSmallest;

    // search the smallest number from a to b (both inclusive)
    for (pSmallest = pAry, pLooker = pAry + 1; pLooker <=pLast; pLooker++){
        if (*pSmallest > *pLooker) {
            pSmallest = pLooker;
        }
    }

    return pSmallest;
}
void exchange (int *current, int *smallest){

    int temp = *current;
    *current = *smallest;
    *smallest = temp;
}
