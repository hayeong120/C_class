#include <stdio.h>
 main(){
  char *a[3] = {"kor", "eng", "math"};
  int i;
  for(i = 0; i<= 2 ; i++)
    printf("a[%d] = %s\n", i, a[i]);
}
