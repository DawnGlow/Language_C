// 다차원 배열
#include <stdio.h>
void EX1(void)
{
  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}}; // 4개 짜리 3줄
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

// 파스칼의 삼각형
void EX2(void)
{
  int p[10][10];
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == 0 || j == i)
      {
        p[i][j] = 1;
      }
      else
      {
        p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
      }
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
}

int main(void)
{
  EX2();
}