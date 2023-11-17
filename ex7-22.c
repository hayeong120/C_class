#include <stdio.h>
 main(){ 
  int i;
  char a[3][20] = {"good morning", "good afternoon", "good evening"};
  for(i = 0 ; i <= 2 ; i++)
	printf("%s\n", a[i]);
}
