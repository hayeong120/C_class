#include <stdio.h>
 main(){
  int a[5] = {100, 200, 300, 400, 500};
  int *ip = &a[0]; // 배열의 주소가 a 임. *ip=a도 동일
  int i;
  for(i=0; i<=4; i++)
  	printf("a[%d] = %d, 주소 = %x\n", i, *(ip+i), &a[i]);
  printf("%d %d %d \n", ip, a, &a[0]);
}
