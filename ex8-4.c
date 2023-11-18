#include <stdio.h>
 main(){
  char ch;
  char *cp = &ch;
  printf("문자 1자 입력: ");
   scanf("%c", &ch);
  printf("%c %d %c %d %d \n", *cp, cp, ch, ch, &ch);
}
