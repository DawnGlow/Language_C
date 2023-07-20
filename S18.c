#include <stdio.h>
/*int main(void) {
  for (int i = 1; ; i++) {
    int k;
    scanf("%d", &k);

    if (k == 0) {
      break; // for문 탈출
    }
    printf("%d번째 %d\n", i, k);
  }
}
*/

int main(void) {
  int n;
  scanf("%d", &n);
  // continue : 현재 루프를 전부 건너 뜀
  // 중첩 for 문
    // for문 안에 for문
    // 예제 : *을 정사각형 만들기, 계단만들기(첫번째 줄에는 1개, 2번째 줄에는 2개니깐 바깥쪽 i를 안쪽 포문의 반복횟수로 설정하면 계단모양이 나온다)
  for (int i = 1 ; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }


}