#include <stdio.h>
 main() {
  int i;
  float a[5];     
   printf("실수5개 입력 : ");
  for(i = 0; i <= 4; i++)
    scanf("%f", &a[i]);
  printf("출력되는 실수5개 : ");
  for(i = 4 ; i >= 0 ; i--)
    printf("%.2f ", a[i]);
 }
