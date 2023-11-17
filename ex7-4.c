# include <stdio.h>
main()  {
  int i;
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {6, 7, 8, 9, 10};
  int c[5];
  for(i = 0; i <= 4; i++)  {
     c[i] = a[i] *b[i];
	 printf("a[%d] = %2d  b[%d] = %2d  c[%d] = %2d\n", i, a[i], i, b[i], i, c[i]);
  }
}
