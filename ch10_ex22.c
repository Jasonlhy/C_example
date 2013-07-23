#include <stdio.h>

int main(void){
  int x [2][3] = {
    {4, 5, 3},
    {7, 6, 9}
  };

  int (*p)[3] = &x[1];
  int (*q)[3] = x;

  printf("\n%d %d %d", (*p)[0], (*p)[1], (*p)[2]);
  printf("\n%d %d", *q[0], *q[1]);

  return 0;
}
