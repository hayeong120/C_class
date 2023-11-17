#include <stdio.h>
 main() {
  int i, j;
  int c[3][4];
  for(i=0; i<=2; i++)
    for(j=0; j<=3; j++)
	  c[i][j] = j;
  for(i=0; i<=2; i++)
    printf("%3d%3d%3d%3d\n", c[i][0], c[i][1], c[i][2], c[i][3]);
}
