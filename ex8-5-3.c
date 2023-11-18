#include <stdio.h>
 main(){
  int *a[3] = {"apple", "banana", "cherry"};
  //char a[3][20] = {"apple", "banana", "cherry"};
  int i;
  for(i = 0; i<= 2 ; i++)
    printf("a[%d] = %s\n", i, a[i]);
}
