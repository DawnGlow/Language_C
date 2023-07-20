#include <stdio.h>
int main(void) {
  int a; // 선언
  /*
  int 모양을 가진 a라는 그릇을 메모리에 생성. 32비트(4바이트)의 크기를 가지고 있음.
  */
  a = 3; // 대입
  printf("%d\n", a);

  a = 5;
  printf("%d\n", a);
  int c = 2;//초기화
  int b = 3;
  printf(" %d + %d = %d\n", c, b, c + b);
  int hap = c + b;
  printf("%d + %d = %d\n", c, b, hap);
}