#include <stdio.h>
 main() {
	int a[5], i;
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	for (i=0; i<=4; i++) 
		printf("a[%d] = %d\n", i, a[i]);
}
