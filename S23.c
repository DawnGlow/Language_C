// 문자열 : 문자들의 열거
#include <stdio.h>
#include <string.h>
void EX1(void)
{
  char arr[] = "Hello, world!"; //{ 'H', 'E', 'L', 'L', 'O'};, 크기는 생략해도 됨
  printf("%s\n", arr);
  printf("%d\n", sizeof(arr) / sizeof(char)); // 크기가 14바이트 ?? 13글자인데?
  // "HELLO"는 { 'H', 'E', 'L', 'L', 'O', '\0' } 로 저장됨. \0 : 널문자
  char s[100];
  scanf("%s", s);
  printf("%s\n", s);
}

void EX2(void)
{
  char str[100];
  scanf("%s", str);
  // 이상태에서 sizeof(str) / sizeof(char)로 사이즈를 구하면 문자열의 길이에 상관없이 100이 나올거다.
  int len = strlen(str); // string.h에 포함되있는 string length 함수
  printf("문자열의 길이는 %d\n", len);
}

void EX3(void)
{
  char str1[] = "Hello";
  char str2[100];     // 선언과 동시에 대입 하지 않으면 str2[]이런 식으로 선언 X!!
  strcpy(str2, str1); // str1의 문자열을 str2에 복사
  printf("str2의 값 : %s\n", str2);
}

void EX4(void)
{
  char str[100] = "Hello";
  strcat(str, " World"); // "World"를 str에 이어 붙이기
  printf("%s\n", str);
}

void EX5(void)
{
  char str1[] = "sample";
  char str2[] = "simple";
  int cmp = strcmp(str2, str1); // 사전에서 str1이 str2보다 앞쪽에 있으면 음수, 뒤쪽에 있으면 양수, 같다면 0을 반환
  printf("%d\n", cmp);
}
int main(void)
{
  EX5();
}