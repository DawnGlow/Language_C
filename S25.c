// 배열과 포인터
#include <stdio.h>
void EX1(void)
{
  int a = 10;
  int *ptr_a = &a;

  printf("ptr_a의 값 : %d\n", ptr_a);          // ex. 1130
  printf("ptr_a + 1 의 값 : %d\n", ptr_a + 1); // ex. 1134
  // 4가 차이나는 이유 : a 는 4바이트를 차지하고 있음. 그래서 a 다음을 가리키는 값은 4가 커져서 1134
}

void EX2(void)
{
  int arr[10];
  for (int i = 0; i < 10; i++, arr[i] = i + 1)
    ;
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", &arr[i]);
  }
  printf("arr의 값 : %d\n", arr); // &arr[0]의 값과 같음!
  // arr + i 는 &arr[i]랑 같은 값을 가진다.
  // arr[i] 는 *(arr + i) 랑 같은 값을 가진다.
}

int main(void)
{
  EX2();
}