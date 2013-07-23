#include <stdio.h>

int main(void){
    FILE *fpText;
    int c;
    int closeStatus;

    printf("This program copies your input to a file \n");
    printf("When you are through enter <EOF> \n\n");

    // open file for writing
    if (!(fpText = fopen("/home/jason/Desktop/textfile.txt", "w"))) {
        printf("Error opening textfile.txt for writing");
        return (1);
    }

    // read the character one by one from the stand input stream
    // and put the character one by one to the file 
    while ((c = getchar()) != EOF){
        fputc(c, fpText);
    }

    // close the file
    closeStatus = fclose(fpText);
    if (closeStatus == EOF) {
        printf("Error closing file\a\n");
        return 100;
    }

    printf("\n\nYour file is complete\n");
    return 0;
}
