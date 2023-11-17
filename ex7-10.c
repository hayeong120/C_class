#include <stdio.h>
 main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {11, 12, 13, 14, 15};
  int i, hap[5], cha[5], gob[5];
  for(i = 0 ; i <= 4 ; i++)
  {
	hap[i] = a[i] + b[i];
	cha[i] = a[i] - b[i];
	gob[i] = a[i] * b[i];
  }
  printf("------------ ÇÕ-------------\n");
  for(i = 0; i <= 4 ; i++)
    printf("%5d", hap[i]);
  printf("\n\n------------ Â÷-------------\n");
  for(i = 0; i <= 4 ; i++)
    printf("%5d", cha[i]);
  printf("\n\n------------ °ö-------------\n");
  for(i = 0; i <= 4 ; i++)
    printf("%5d", gob[i]);
}
