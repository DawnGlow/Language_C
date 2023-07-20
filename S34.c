// prototype : 원형, 시제품
// 장점 : 함수의 선언, 실행 순서 신경 안써도 된다.
#include <stdio.h>
void walk(int); // int 뒤에 변수 이름 선언 안해도 됨.
void rotate(int);
void drawSquare();

int main(void) {
    drawSquare();
}
// 걷기
void walk(int distance) {
    printf("%d 걸음\n", distance);
}
void drawSquare() {
    for (int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
// 돌기
void rotate(int angle) {
    printf("%d도 회전\n", angle);
}