#include <stdio.h>
 main(){
  char *a = "good!";      // ������ ���� ����
  char b[] = "good!";     // �迭 ���� ����(ũ�� �ڵ� �Ҵ�)
  char c[10] = "good!";   // ũ�⸦ �˳��ϰ� ������ ���
  int a_size = sizeof a;   // 8(������ �ڷ��� ũ��)
  int b_size = sizeof b;   // 6(�迭 ũ��)
  int c_size = sizeof c;   // 10(�迭 ũ��)
  printf("%d %d %d\n", a_size, b_size, c_size);    // 8 6 10
}
