#include <stdio.h>
struct Point {
    int x, y;
};
int main(void) {
    /*
    typedef struct {
        int x, y;
    } Point;
    // struct {int x, y} p; 로 선언해도 됨.
    */
    // 아래는 위와 같은 표현
    struct Point p;  // c에서는 struct를 써 줘야 하고, cpp는 쓸 필요 x
    p.x = 3;
    p.y = 4;

    printf("%d, %d \n", p.x, p.y);
}