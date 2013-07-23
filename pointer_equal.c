#include <stdio.h>

int main(void){
  int i;
  int n [] = {1, 2, 3, 4};
  int *pFirst = n;
  int *pFirst2 = &n[0];

  if (pFirst == pFirst2){
    printf("Two pointers are qual");
  }
  else {
    printf("Two potners are not equal");
  }

  return 0;
}
