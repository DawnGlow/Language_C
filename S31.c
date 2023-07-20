// Fuction, 함수
#include <stdio.h>
void EX1(void)
{
  int itemcnt = 0;
  int money = 100;
  // item buy
  itemcnt++;
  money -= 10;
  printf("아이템 구매\n");
  printf("아이템 개수 : %d\n", itemcnt);
  printf(" 잔액: %d\n", money);
  // 여러번 실행 하거나 금액이 바뀔때, 이럴 때 복잡해짐
}

int main(void) // main함수 정의
{
  printf("Hello world\n"); // 함수 호출
  EX1();
}