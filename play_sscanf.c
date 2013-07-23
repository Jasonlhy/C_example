#include <stdio.h>

int main(void){
    char input[] = "Washington, George;";
    char pLast[26];

    sscanf(input, "%[^,]", pLast);
    printf("input: %s\n, %p", input, input);
    printf("pLast: %s, %p", pLast, pLast);

    return 0;
}
