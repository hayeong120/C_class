#include <stdio.h>
#include <string.h>
 main(){
  char *a[] = {"seoul", "taejun", "Korea", "taegu", "ºÎ»ê", "daegu"};
  int i, j, l, N = 6; 
  char *f, *temp;
   printf("original data :\n");
  for(i=0; i<N; i++)
    printf("a[%d] = %s\n", i, a[i]);
  for(i=0; i<N-1; i++) {
	f = a[i];
	l = i;
	for(j=i; j<N; j++){
		if(strcmp(a[j], f) < 0) {
	      	f = a[j];
	      	l = j;
	    }
	}
	temp = a[i];
	a[i] = a[l];
	a[l] = temp;
  }
     printf("\n\n\nAscending sort data : \n");
    for(i=0;i<N;i++)
	   printf("a[%d] = %s\n", i, a[i]);
}
