#include <stdio.h>
 main(){
  char a[5] = "korea";
  char *p, *q;
  p = a;    //p = &a[0] 
  q = a+1;  //q = &a[1]
  printf("%s %s %s\n", a, p, q);
  printf("p = %d\n", *p);	// 아스키코드값 
  printf("q = %d\n", *q);	
  printf("p = %c\n", *p);	// 데이터값 
  printf("q = %c\n", *q);	
  printf("p = %x\n", p);	// 주소값 
  printf("q = %x\n", q);
  printf("p의 크기는 %d\n", sizeof(p));
  printf("q의 크기는 %d", sizeof(q));
}
