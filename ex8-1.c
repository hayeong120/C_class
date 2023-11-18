#include <stdio.h>
 main(){
  int i, j;
  int *ip;
  printf("정수입력: ");
   scanf("%d", &i);
  ip = &i;
  j = *ip;
  printf("j = %d\n", j);
  printf("i = %d ip= %d", i, ip);
}
