#include <stdio.h>
 main() {
  int i;
  char a[5];     
   printf("���� 5�� �Է�: ");
  for(i = 0 ; i <= 4 ; i++)
    scanf("%c", &a[i]);
   printf("���� ��� : ");
  for(i = 4 ; i >= 0 ; i--)
	printf("%c ", a[i]);
}
