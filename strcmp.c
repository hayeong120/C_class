#include <stdio.h>
 main(){
  char a[10] = "aaa";
  char b[10] = "aab";
  char c[10] = "aaa";
  char d[10] = "aad";
   printf("%d\n", strcmp(a,c));   // 0
   printf("%d\n", strcmp(a,b));   //-1
   printf("%d\n", strcmp(d,a));   //1
   printf("%d\n", strncmp(a,b,2));   //0
   printf("%d\n", strncmp(a,b,3));   //-1
}
