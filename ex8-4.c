#include <stdio.h>
 main(){
  char ch;
  char *cp = &ch;
  printf("���� 1�� �Է�: ");
   scanf("%c", &ch);
  printf("%c %d %c %d %d \n", *cp, cp, ch, ch, &ch);
}
