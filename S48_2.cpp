// 난수
// exit(0); 그 자리에서 프로그램 종료

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // seed 값에 따라 난수의 값이 변함
    srand(time(NULL));  // time(NULL)1970.01.01 000000로 부터 지난 시간, 초단위
    printf("%d\n", time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("%d\n", rand() % 10 + 1);
    }
}