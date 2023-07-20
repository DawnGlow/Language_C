#include <stdio.h>
/*int main(void) {
  int i;
  i = 1;
  while (i <= 10) {
    printf("%d\n", i++);
  }
  for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }
    for (i = 1; i <= 10;) {
    printf("%d\n", i++);
  }

  //for 문 : 일정하게 증가/감소되는 벼수가 필요할때
  // 배열의 모든 원소에 순차적으로 접근하고 싶을때
  // 특정 횟수만큼 작업을 반복하고 싶을 때
}

*/

/* 
int main(void) {
  // 1, 2, 4, 8...
  int n;
  scanf("%d", &n);
  for (int i = 1; i < n; i *= 2) {
    printf("%d\n", i);
  }
}
*/

int main(void) {
  // 1~n 합
  int n, result = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    result += i;
  }
  printf("result : %d\n", result);
}