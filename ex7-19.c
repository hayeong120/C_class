#include <stdio.h>
 main() { 
  int i, j;
  int a[3][3], b[3][3], c[3][3];
  printf("ù��° �迭�� �Է�(3*3) : \n");
  for(i=0; i<=2; i++)
    for(j=0; j<=2; j++)
      scanf("%d", &a[i][j]);
  printf("\n a: \n");
  for(i=0; i<=2; i++) {
    for(j=0; j<=2; j++)
	  printf("%3d", a[i][j]);
    printf("\n");
  }
  printf("\n�ι�° �迭�� �Է�(3*3) : \n");
  for(i=0; i<=2; i++)
    for(j=0; j<=2; j++)
	  scanf("%d", &b[i][j]);
  printf("\n b: \n");
  for(i=0; i<=2; i++) {
    for(j=0; j<=2; j++)
	  printf("%3d", b[i][j]);
    printf("\n");
  }
  for(i=0;i<=2; i++)
    for(j=0; j<=2; j++)
	  c[i][j] = a[i][j] + b[i][j];
  printf("\n c(a + b) : \n");
  for(i=0; i<=2; i++) {
    for(j=0; j<=2; j++)
	  printf("%3d", c[i][j]);
    printf("\n");
  }
}
