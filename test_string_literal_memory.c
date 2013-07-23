#include <stdio.h>

char *get_string_literal();
char *get_string_array();
int main(void){
  char *s = get_string_literal(); 
  char *sa = get_string_array();
  
  printf("from iteral :%s\n", s);
  printf("from array :%s", sa);
}

char *get_string_literal(){
  char *str = "jason";
  return str;
}

char *get_string_array(){
  char str[] = "jason array";
  return str;
}
