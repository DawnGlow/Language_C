// 포인터 : 변수의 주소를 저장
#include <stdio.h>

void EX1(void)
{
  int a = 20;
  int *ptr_a = &a; // *는 선언
  printf("%d\n", ptr_a);
  printf("%d\n", *ptr_a); // ptr_a가 가리키는 변수를 사용할 때
}

void EX2(void)
{
  int a = 10;
  int b = 20;

  int *ptr = &a;
  printf("initial : %d\n", *ptr);
  ptr = &b;
  printf("after : %d\n", *ptr);
  *ptr = 30;
  printf("대입 후 : %d\n", *ptr);
}

// 포인터를 가리키는 포인터
void EX3(void)
{
  int a = 10;
  int *ptr = &a;
  int **ptr_ptr;
  ptr_ptr = &ptr;
  printf("%d\n", *ptr_ptr);  // ptr_ptr이 가리키는 변수의 값, 즉 ptr의 값 : a의 주소!
  printf("%d\n", **ptr_ptr); // ptrptr이 가리키는 변수의 값 : ptr의 값, ptr이 가리키는 변수의 값 : 즉 A의 값
}
int main(void)
{
  EX3();
}