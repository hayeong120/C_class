#include <stdio.h>
 main()  { 
  char str1[5] = {"today"};   
  char *cp = str1;
  printf("%c\n", *(cp+2)); 
  printf("%c\n", str1[4]); 
  printf("%x %x\n", cp, &str1[0]);   
} 
