#include <stdio.h>
 main() {
  int i, data;
  int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  printf("0부터 9사이의 숫자를 입력\n");
   scanf("%d", &data);
  while(data >= 0 && data <= 9)
  {
    ++a[data];
    scanf("%d", &data);
  }
  printf("누적 입력 횟수\n");
  for(i = 0; i <= 9; i++)
     printf("%2d : %d\n", i, a[i]);
}
