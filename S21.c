// 배열 활용
//  입력받은 숫자들을 거꾸로 출력
#include <stdio.h>

void EX1(void)
{
  int n;
  int arr[1000]; // 적당히 큰 수
  printf("입력할 숫자의 개수 입력 : ");
  scanf("%d", &n); // int arr[n] 이런 선언은 X, Because 변수를 선언하는데 사이즈를 모르면 어떻게 선언해?, 동적 할당을 이용해야 가능
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
}
// 최대 최소 구하기
void EX2(void)
{
  int n;
  int arr[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int max = arr[0], min = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  printf("max : %d, min : %d\n", max, min);
}

// 짝수 개수 구하기
void EX3(void)
{
  int n;
  int arr[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      count++;
    }
  }
  printf("짝수의 개수 : %d\n", count);
}
int main(void)
{
  EX3();
}