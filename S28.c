//  포인터 배열 : 포인터들의 배열
#include <stdio.h>
void EX1(void)
{
  // 배열 포인터 선언 : int (*ptr)[3];
  // 포인터 배열 선언
  int *ptr[4]; // 4개 짜리 배열이 생기고, 배열에는 포인터가 들어감.
  int a = 10, b = 20, c = 30, d = 40;
  ptr[0] = &a;
  ptr[1] = &c;
  ptr[2] = &d;
  ptr[3] = &b;

  printf("value : %d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
}

void EX2(void)
{
  int arr[4] = {1, 2, 3, 4};
  int *ptr[4];
  for (int i = 0; i < 4; i++)
  {
    ptr[i] = &arr[i];
  }

  for (int i = 0; i < 4; i++)
  {
    printf("%d ", *ptr[i]);
  }
}

void EX3(void)
{
  char str[] = "Hello";
  printf("%s\n", str);
  // 위 식은 아래와 같은 결과가 나옴.
  printf("%s\n", &str[0]);
  // printf함수 안에 %s가 문자열 배열의 주소를 알려주면 널문자가 나올때까지 출력하는 방식.
  char strings[3][10] = {"Hello", "World", "Doodle"};
  char *p_str[3];
  for (int i = 0; i < 3; i++)
  {
    p_str[i] = strings[i]; // H, W, D를 가리키게됨.
  }
  for (int i = 0; i < 3; i++)
  {
    printf("%s\n", strings[i]); // strings[i] == &strings[i][0]
  }

  for (int i = 0; i < 3; i++)
  {
    printf("%s\n", p_str[i]);
  }
}

int main(void)
{
  EX3();
}