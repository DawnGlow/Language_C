#include <stdio.h>
// 전역변수
int itemcnt = 0;
int money = 100;
int buyItem(int cost, int cnt)
{
  if (money < cost) // 예외를 우선 체크해서 코드 앞에서 return 시키기.
  {
    printf("잔액이 부족합니다\n");
    return -1;
  }
  itemcnt += cnt;
  money -= cost;
  printf("아이템을 구매했습니다.\n");
  printf("아이템 개수: %d\n", itemcnt);
  printf(" 잔액 : %d\n", money);
  return 0;
}

int main()
{
  int result;
  result = buyItem(3000, 5);
  buyItem(50, 7);
}