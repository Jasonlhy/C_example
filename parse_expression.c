#include <stdio.h>
#include <string.h>

int main(void){
  char str[] = "sum = sum + 10;";
  char *pToken;
  int tokenCount;
  
  tokenCount = 0;
  pToken = strtok(str, " ;");
  
  while (pToken){
    tokenCount++;
    printf("Token %d: %s \n", tokenCount, pToken);
    pToken = strtok(NULL, " ;");
  }
  return 0;
}
