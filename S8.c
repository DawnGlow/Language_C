// char : 1바이트 정수형 (int : 4 바이트)
// character : 문자 (반각문자 ABCac1121414, 한글 한자 일본어 이런거는 X)
#include <stdio.h>
int main(void) {
  char a = 65;
  printf("%d\n", a); // 65출력
  printf("%c\n", a); // A출력
  printf("%c\n", 'A'); // A출력
  // 'A' == 65

  //ASCII : American Standard, 문자를 숫자에 대응

  char b;
  printf("문자 입력 : ");
  scanf("%c", &b);
  printf("당신이 입력한 문자는 %c입니다\n", b);
  printf("%c의 ASCII 값 : %d\n", b, b);

  int c;
  printf("숫자 입력 : ");
  scanf("%d", &c);
  printf("당신이 입력한 숫자는 %d입니다\n", c);
  printf("%d의 문자 : %c\n", c, c);
}