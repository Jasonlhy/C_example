#include <stdio.h>
#include <string.h>

int main(void){
  char *n1 = "jason";
  char *n2 = " is handsome";
  
  char *result = strcat(n1, n2);
  
  printf("result :%s", result);
  
  return 0;
}
