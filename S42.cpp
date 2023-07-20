#include <stdio.h>

struct Time {
    int h, m, s;
    int TotalSec() {
        return 3600 * h + 60 * m + s;  // time이라는 구조체와 밀접한 관련이 있으므로, 함수를 구조체의 멤버로 포함시킨다.
    }
};

int main(void) {
    Time t = {1, 22, 48};
    printf("초 : %d\n", t.TotalSec());
}