#include <stdio.h>
#include <ctype.h>

int main(void){
    char *wrongMessage= "You are not entering the sentence started with upper case\n" ;
    char input[81];
    while (fgets(input, sizeof(input), stdin)){
        if (isupper(*input))
            fputs(input, stdout);
        else
            fputs(wrongMessage, stdout);
    }

    return 0;
}
