#include <stdio.h>
 main() {
  int a[10], i;
   printf("10개의 숫자를 입력 : ");
  for(i = 0; i <= 9; i++)
     scanf("%d", &a[i]);
  for(i = 9; i >= 0 ; i--)
     printf("%d ", a[i]);
}
