#define FLUSH while (getchar() != '\n')
#define ERR1 "\aPrice incorrect. Re-enter both fields\n"
#define ERR2 "\aAmount incorrect. Re-enter both fields\n"
#include <stdio.h>

int main(void){
    int ioResult;
    int amount;
    float price;

    do {

        printf("\n Enter amount and the price");
        // scanf will return the number of successful data we read into the variable's address
        ioResult = scanf("%d%f", &amount, &price );

        /* very import of this */
        // when scanf encouter an error, it will still leave the invalid data in the input stream
        // and therefore we always get the wrong ioResult
        // FLUSH will read all the data from the invalid input to the end of the line
        FLUSH;
        if (ioResult != 2){
            if (ioResult == 1)
                printf(ERR1);
            else
                printf(ERR2);
        }

    } while (ioResult != 2);

    return 0;
}
