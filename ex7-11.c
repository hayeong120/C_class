#include <stdio.h>
 main() {
  int i;
  char a[5];     
   printf("문자 5개 입력: ");
  for(i = 0 ; i <= 4 ; i++)
    scanf("%c", &a[i]);
   printf("문자 출력 : ");
  for(i = 4 ; i >= 0 ; i--)
	printf("%c ", a[i]);
}
