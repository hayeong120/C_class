#include <stdio.h>
 main(){
  char *a = "good!";      // 포인터 형태 선언
  char b[] = "good!";     // 배열 형태 선언(크기 자동 할당)
  char c[10] = "good!";   // 크기를 넉넉하게 선언한 경우
  int a_size = sizeof a;   // 8(포인터 자료형 크기)
  int b_size = sizeof b;   // 6(배열 크기)
  int c_size = sizeof c;   // 10(배열 크기)
  printf("%d %d %d\n", a_size, b_size, c_size);    // 8 6 10
}
