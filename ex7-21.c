#include <stdio.h>
 main() {   
  int i, j;
  int a[3][5];
  float ave[3];
  char name[3][20] = {"홍길동", "이순신", "거북선"};
  for(i=0; i<=2; i++) {
	printf("번호[%d] = ",i+1);
	scanf("%d", &a[i][0]);
	for(j=1; j<=3; j++) {
	  printf("성적 입력[%d][%d] = ", i, j);
	  scanf("%d", &a[i][j]);
	}
  }
  for(i=0; i<=2; i++) {
	a[i][4] = a[i][1]+a[i][2]+a[i][3];
	ave[i] = (float)a[i][4]/3.0;
  }
  printf("\n");
  printf("                ▶ 성적일람표 ◀            \n");
  printf("===============================================\n");
  printf(" 학번    이름   국어  영어  수학  총점   평균  \n");
  printf("-----------------------------------------------\n");
  for(i=0; i<=2; i++)
	printf(" no.%2d %7s %4d %5d %5d  %5d   %.2f\n",
                 a[i][0],name[i],a[i][1],a[i][2],a[i][3],a[i][4],ave[i]);
  printf("-----------------------------------------------\n");
}
