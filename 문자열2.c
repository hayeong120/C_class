#include <stdio.h>
 main(){
  char *a = "good!";        // ������ ���� ���ڿ� ����
  char b[] = "good!";       // �迭 ���� ���¿� ��
  printf("%c  %c\n", a[0], a[1]); // g, o
  printf("%c  %c\n", b[0], b[1]); // g, o
  printf("%s\n", a);      // good!  // ���ڿ� ��ü ���
  printf("%s\n", b);      // good!
}
