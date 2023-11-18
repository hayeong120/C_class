#include <stdio.h>
 main(){
  int a[] = {10,20,30};  //硅凯狼 林家
  int *cp = &a[0];
  int i;
  for(i = 0; i<= 2 ; i++)
    printf("a[%d] = %d, 林家 = %x\n", i, *(cp+i), &a[i]);
}
