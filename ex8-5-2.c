#include <stdio.h>
 main() {
  char *cp = "apple";   // cp�� 1byte apple�� 6����Ʈ �̹Ƿ� ����Ұ�
  while(*cp != '\0') {
    printf("%s\n", cp);
    cp++;
  }
}
