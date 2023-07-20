#include <stdio.h>
// return;
// 2개의 매개변수의 합을 반환
int plus(int a, int b)
{
  return a + b;
}

int nomean()
{
  printf("first\n");
  return 1;           // 실행 종료
  printf("seocnd\n"); // 실행 x
  return 2;           // 실행x
}

void nomean2()
{
  printf("void test\n");
  return;
}
int main(void) // 메인함수에서 return이 없으면 알아서 return 0; 처리 해준다.
{
  int a;
  a = printf("aaa\n"); // printf()의 리턴값 : 문자열에 저장된 문자의 개수(널문자 포함)
  printf("%d\n", a);
  printf("%d\n", plus(3, 5));
  printf("반환된 값 : %d\n", nomean());
  nomean2();
}