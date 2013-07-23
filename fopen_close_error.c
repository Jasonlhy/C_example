#include <stdio.h>

int main(void){
    FILE *fpTemps;

    // NULL indicates no address
    if ((fpTemps = fopen("TEMPS.DAT", "r")) == NULL) {
        printf("\a Error opening TEMPS.DAT\n");
        return (100);
    }
    
    // EOF indicates errors
    if (fclose(fpTemps) == EOF) {
        printf("\aError closing TEMPS.DAT\n");
        return (102);
    }

}
