#include <stdio.h>
 main() {
	int i;	// 변수는 for문 밖에서 선언 
	int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	for (i=0; i<=7; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}
