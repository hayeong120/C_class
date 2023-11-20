#include <stdio.h>   문자열4.c
 main(){
  char *a = "good!"; // 포인터 형태 선언
  char b[] = "good!"; // 배열 형태 선언 
  // 일부 글자 변경 시도
  //a[3] = 'b';     // 변경 불가(segmentation fault 발생)
  b[3] = 'b';       // "goob!" 으로 변경 완료
  printf("%s", b); 
}
