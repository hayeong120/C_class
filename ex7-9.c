#include <stdio.h>
 main() {
  int i;
  float a[5];     
   printf("�Ǽ�5�� �Է� : ");
  for(i = 0; i <= 4; i++)
    scanf("%f", &a[i]);
  printf("��µǴ� �Ǽ�5�� : ");
  for(i = 4 ; i >= 0 ; i--)
    printf("%.2f ", a[i]);
 }
