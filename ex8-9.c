#include <stdio.h>  
 main() {
  int i, j;
  int *ip;
  printf("입력데이터: ");
   scanf("%d", &i);    printf("\n");
  ip = &i;
  j = *ip;
  printf("i 주소 = %d\n", &i);
  printf("ip = %d\n\n", ip);
  printf("j = %d\n", j);
  printf("*ip = %d", *ip);
}
