#include <stdio.h>
 main() {
  int i, data;
  int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  printf("0���� 9������ ���ڸ� �Է�\n");
   scanf("%d", &data);
  while(data >= 0 && data <= 9)
  {
    ++a[data];
    scanf("%d", &data);
  }
  printf("���� �Է� Ƚ��\n");
  for(i = 0; i <= 9; i++)
     printf("%2d : %d\n", i, a[i]);
}
