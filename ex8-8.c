#include <stdio.h>
 main(){
  char a[5] = "korea";
  char *p, *q;
  p = a;    //p = &a[0] 
  q = a+1;  //q = &a[1]
  printf("%s %s %s\n", a, p, q);
  printf("p = %d\n", *p);	// �ƽ�Ű�ڵ尪 
  printf("q = %d\n", *q);	
  printf("p = %c\n", *p);	// �����Ͱ� 
  printf("q = %c\n", *q);	
  printf("p = %x\n", p);	// �ּҰ� 
  printf("q = %x\n", q);
  printf("p�� ũ��� %d\n", sizeof(p));
  printf("q�� ũ��� %d", sizeof(q));
}
