#define _CRT_SECURE_NO_WARNIGS // scanf 보안경고 무시
#include <stdio.h>
// 사용자에게 입력을 받는 프로그램
int main() {
    int a, b;
    scanf("%d%d", &a, &b); // & : 포인터
    // scnaf_s 사용
    // 분리된 숫자를 인식, 16 7 또는 16 엔터 7을 입력하면 16과 7 이 입력됨.
    printf("%d %d\n", a, b);
}