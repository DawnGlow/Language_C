#include <stdio.h>
int main(void) {
  makeChoice:
  printf("새 게임 : 1\n");
  printf("불러오기 : 2\n");
  printf("설정 : 3\n");
  printf("크레딧 : 4\n");

  int n;
  scanf("%d", &n);
  // if 문으로 경우의 수 나누면 코드가 길어짐...
  switch (n) {
    case 1:
      printf("새 게임 : 1\n");
      break;
    case 2:
      printf("불러오기 : 2\n");
      break;
    case 3:
      printf("설정 : 3\n");
      break;
    case 4:
      printf("크레딧 : 4\n");
      break;
    default:
      printf("잘못 입력하셨습니다\n");
      goto makeChoice;
      break;
  }
  printf("***\n");

}