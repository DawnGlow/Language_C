// typedef (type define)
// 형을 정의
#include <stdio.h>

void EX1() {
    typedef int Int32;
    Int32 n = 20;
    printf("%d\n", n);
    printf("%d\n", sizeof(Int32));
}

void EX2() {
    typedef int Pair[2];  // pair 는 크기가 2인 int형 배열이다.
    Pair point = {3, 4};  // int point[2] = {3, 4};
    printf("%d %d\n", point[0], point[1]);
}

void EX3() {
    typedef char *String;
    String name = "Junseo";  // char *name = "Doodle";
    printf("이름 : %s\n", name);
}
int main(void) {
    EX1();
    EX2();
    EX3();
}