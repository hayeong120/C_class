#include <stdio.h>
 main(){
  int a[5] = {100, 200, 300, 400, 500};
  int *ip = &a[0]; // �迭�� �ּҰ� a ��. *ip=a�� ����
  int i;
  for(i=0; i<=4; i++)
  	printf("a[%d] = %d, �ּ� = %x\n", i, *(ip+i), &a[i]);
  printf("%d %d %d \n", ip, a, &a[0]);
}
