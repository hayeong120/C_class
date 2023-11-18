#include  <stdio.h>
 main() {
  char aa[5] = "KOREA";	// 배열 선언
  char *p = &aa[0];		//char *p; p = &aa[0];
  printf("p = %x\n", &aa[0]); 
  int i;
  for(i=0;i<=4;i++)
	printf("aa[%d] = %c, 주소 = %p\n", i, *(p+i), &aa[i]);
}
