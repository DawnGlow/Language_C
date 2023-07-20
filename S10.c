// 산술연산자 : 수학적인 연산
#include <stdio.h>
int main(void) {
  int a = 5;
  printf("a는 원래 %d 였다\n", a);
  a = a + 3; // = : 대입연산
  // a += 3;과 동치
  // *=, /=, %=, -=

  printf("3을 더했더니 %d 가 되었다\n", a);
  // ++ --
  a = 10;
  printf("a는 %d 였습니다\n", a);
  a++; // a = a + 1;
  printf("a는 %d가 되었습니다\n", a);
  // ++a; 전치 증가 연산
  // a++; 
  printf("a의 후치연산결과 : %d\n", a++);
  printf("a = %d\n", a);

  printf("a의 전치연산결과 : %d\n", ++a);
  printf("a = %d\n", a);

}