#include <stdio.h>
/*
int main(void) {
  // for 문에서 조건문을 비우면 true로 간주
  int n, t = 1;
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    printf("%d\n", t);
    t *= 2;
  }
}
*/
int main(void) {
  int n;
  scanf("%d", &n);
  int i, sum;
  for (i = 1, sum = 0; i <= n; sum += i++); // 중괄호가 없을 땐 세미콜론을 꼭 적기
  printf("result : %d\n", sum);
}