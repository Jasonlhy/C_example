#include <stdio.h>
#include <math.h>

void initialized_array(int ary []);
void shuffle_deck(int ary []);
void exchange(int *current, int *rand);
void printData(int ary[]);
int main(void){
    int deck [52];
    initialized_array(deck);
    shuffle_deck(deck);
    printData(deck);
}

void initialized_array(int ary []){
    int i;
    for (i = 0; i < 52; i++) {
        ary[i] = i + 1;
    }
}

void shuffle_deck(int ary []){
    int i;
    int randIndex;

    for (i = 0; i < 52; i++) {
        randIndex = rand() % 52;
        exchange(ary+i, ary+randIndex);
    }
}

void exchange(int *current, int *rand){
    int temp = *current;
    *current = *rand;
    *rand = temp;
}

void printData(int ary[]){
    int i;
    int rank;
    int add1;

    for (i = 0; i < 52; i++) {
        rank = ary[i] % 13 + 1;
        add1 = rank + 1;
        if (add1>=1 && add1 <=13) {
            printf("Clubs ");
        }
        else if (add1>=14 && add1 <=26) {
            printf("Diamons ");
        }
        else if (add1>=27 && add1 <=39) {
            printf("Heart ");
        }
        else if (add1>=40 && add1 <=52) {
            printf("Spades ");
        }
        printf("%d\n", rank);
    }
}
