#include <stdio.h>
 main(){
  int i;
  int *ip = &i;
  printf("정수입력: ");
   scanf("%d", &i);
  printf("결과 = %d\n", *ip+1);
  printf("주소값= %d  %d", ip, ip+1);
}
