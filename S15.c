//반복문
#include <stdio.h>
int main(void) {
  /*
  int i = 1;

  while (i <= 10) {
    printf("%d\n", i++);
  }
  */

 int i = 15;
// do while --> 반드시 1번은 실행 시켜야 할 때 ex. 입력을 받고나서 조건을 체크할 때.
 do {
  printf("%d\n", i++);
 } while(i <= 10);

 // while(true) { 무한반복 }
}