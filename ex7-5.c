#include <stdio.h>	// 피보나치 순열을 이용한 예제  
 main() {
  int i, f[10];	 
  f[0] = 0, f[1] = 1;	  
  for(i = 2; i <= 9; i++)
     f[i] = f[i-2] + f[i-1];
  for(i = 0; i <= 9 ; i++)
     printf("f[%d] = %3d\n", i, f[i]);
}
