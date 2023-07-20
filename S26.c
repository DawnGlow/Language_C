// 배열포인터
#include <stdio.h>
void EX1(void)
{
  int arr[3] = {1, 2, 3};
  int *ptr = arr;
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", i[ptr]); // ??? i[ptr] == ptr[i] // 실제로 쓸 일 없음
  }
  // arr[i] == *(arr + i) == *(ptr + i) == *(i + ptr) == i[ptr]
  // a[b] == *(a + b)
}

/*
  1. ptr == &ptr[0]
  2. *ptr == ptr[0]
  3. ptr + 1 == ptr + sizeof(*ptr)을 더한 값
*/

void EX2(void)
{
  int a = 4;
  int arr[3] = {1, 2, 3};
  printf("&arr = %d\n", &arr);
  printf("&arr + 1 : %d\n", &arr + 1); // 위랑 12 차이남. because arr의 크기가 12바이트.
  // 3번에 의해 &arr + 1 == &arr + sizeof(*(&arr)) == &arr + sizeof(arr)
  // 의미적으로 보자면, &a + 1을 하면 a의 크기만큼인 4바이트가 주소에 더해지는데, &arr + 1 을 하면 arr의 크기만큼인 12바이트가 주소에 더해진다.
}

void EX3(void)
{
  int arr[3] = {1, 2, 3};
  int(*ptr_arr)[3]; // 길이가 3인 배열을 가리키는 포인터. 즉 배열을 가리키는 포인터. 배열포인터!. *랑[3]은 배열 포인터임을 나타내는 형식이므로 대입할때는 ptr_arr = &arr로 표현
  // 위 코드는 int(*ptr_arr)[3] = &arr;와 같은 코드이다.

  ptr_arr = &arr;
  for (int i = 0; i < 3; i++) {
    printf("%d ", (*ptr_arr)[i]); // *ptr_arr는 ptr_arr이 가리키는 변수의 값 즉 arr의 값, arr의 값== arr의주소, arr[i]가 된다.
  }
}
int main(void)
{
  EX2();
}