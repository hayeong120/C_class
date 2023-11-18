#include <stdio.h>
 main(){
  char a[3][20];
  int i;
  printf("문자열 입력 : ");
  for(i = 0; i<= 2 ; i++)
    scanf("%s", a[i]);
  for(i = 0; i<= 2 ; i++)
    printf("a[%d] = %s\n", i, a[i]);
}
