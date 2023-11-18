#include <stdio.h>
 main() { 
  char *p = "windows";   // p에는 w의 첫 번째 주소값만 저장
  printf("%s\n", p); 
  printf("%d\n", p); 
  printf("%c %c %c\n", p[3], p[4], p[5]);
} 
