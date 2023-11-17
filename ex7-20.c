#include <stdio.h>
 main(){
  int i, j, k, sum;
  int a[3][4] = {{1, 2, 3, 4}, 
  				 {5, 6, 7, 8}, 
				 {9, 10, 11, 12}};
  int b[4][4] = {{1, 3, 2, 2}, 
  				 {8, 5, 4, 3}, 
				 {5, 12, 12, 6}};
  int c[3][4];
  for(i=0; i<=2; i++)
    for(j=0; j<=3; j++) {
	  sum = 0;
	  for(k=0; k<=3; k++)
	    sum += a[i][k] * b[k][j];
	  c[i][j] = sum;
    }
  printf("a 배열방\n");
  printf("------------------------------\n");
  for(i=0; i<=2; i++) {
	for(j=0; j<=3; j++)
	  printf("%5d", a[i][j]);
	printf("\n");
  }
  printf("\n b 배열방\n");
  printf("------------------------------\n");
  for(i=0; i<=2; i++) {
	for(j=0; j<=3; j++)
	  printf("%5d", b[i][j]);
	printf("\n");
  }
  printf("\n c 배열방\n");
  printf("------------------------------\n");
  for(i=0; i<=2; i++) {
	for(j=0; j<=3; j++)
	  printf("%5d", c[i][j]);
	printf("\n");
  }
}
