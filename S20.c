// array : 배열
#include <stdio.h>
/*
int main(void) {
  int a[100];
  for (int i = 0; i <= 99; i++) {
    a[i] = i + 1;
  }

  printf("대입 완료\n");
  for (int i = 0; i <= 99; i++) {
    printf("a[%d] : %d\n", i, i + 1);
  }
  return 0;
}


*/
int main(void) {
  int arr[5] = { 3, 1, 4, 1, 5}; // 선언 방법 2, 4*5=20바이트
  int brr[] = {3, 1, 4}; // 3칸짜리 배열 알아서 선언, 12바이트
  // sizeof(brr) / sizeof(int) : 배열의 개수를 알 수 있다.  --> 배열의 사이즈를 미리 지정하지 않은 경우 유용할듯?
  for (int i = 0; i < sizeof(brr) / sizeof(int); i++) {
    printf("%d " , brr[i]);
  }

}