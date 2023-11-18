#include <stdio.h>
 main() {
  char *cp = "apple";   // cp는 1byte apple는 6바이트 이므로 저장불가
  while(*cp != '\0') {
    printf("%s\n", cp);
    cp++;
  }
}
