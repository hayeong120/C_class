#include <stdio.h>
 main() {
  int i, j;
  int c[3][3];
  for(i=0; i<=2; i++)
    for(j=0; j<=2; j++)
	  c[i][j] = 0;
  for(i=0; i<=2; i++)
	c[i][i]= 1;
  for(i=0; i<=2; i++) {
	for(j=0; j<=2; j++)
	  printf("%3d", c[i][j]);
	printf("\n");
  }
}
