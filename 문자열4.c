#include <stdio.h>   ���ڿ�4.c
 main(){
  char *a = "good!"; // ������ ���� ����
  char b[] = "good!"; // �迭 ���� ���� 
  // �Ϻ� ���� ���� �õ�
  //a[3] = 'b';     // ���� �Ұ�(segmentation fault �߻�)
  b[3] = 'b';       // "goob!" ���� ���� �Ϸ�
  printf("%s", b); 
}
