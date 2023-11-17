# include <stdio.h>
 main()  {
  int i, sum = 0;
  int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
  for(i = 0; i <= 7; i++)
     sum += a[i];
  printf("sum = %d\n", sum);
}
