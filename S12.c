#include <stdio.h>
int main(void) {
  /*
  int n;
  scanf("%d", &n);
  if (n % 2 == 0) {
    printf("n은 짝수\n");
  }
  else {
    printf("n은 홀수\n");
  }
  */
  if (1) {
    printf("***\n");
  }
  else {
    printf("$$$\n");
  }

  int n;
  scanf("%d", &n);
  if (n > 0) {
    printf("n은 양수\n");
  }
  else if (n == 0) {
    printf("n은 0\n");
  }
  else {
    printf("n은 음수\n");
  }
}