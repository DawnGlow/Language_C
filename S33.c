// call - by - value
// call - by - reference
#include <stdio.h>
// swap code
void EX1()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int tmp = a;
  a = b;
  b = tmp;
  printf("%d %d\n", a, b);
  swap(a, b);
  printf("%d %d\n", a, b);
  swap2(&a, &b);
}
void swap(int x, int y)
{ // call by value
  int tmp = x;
  x = y;
  y = tmp;
}

void swap2(int *x, int *y) // call by reference
{
  int tmp = *x; // x는 ex1의 a를 가리키고 있음.
  *x = *y;      // y는 ex2의 b를 가리키고 있음.
  *y = tmp;
}

int main(void)
{
  EX1();
}