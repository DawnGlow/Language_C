#include <stdio.h>
#define MAX(A, B) (((A) > (B)) ? (A) : (B))
#define FOR(I, S, E) for (int I = S; I <= E; I++)  // 매크로의 극치, 길이가 짧다는 장점?, 헷가릴수
#define LOOP while (1)
int max(int a, int b) {
    // 3항 연산
    return (a > b) ? a : b;
}

int main(void) {
    int a = 10, b = 13;
    printf("%d\n", MAX(a, b - 5));
    FOR(i, 1, 10) {
        printf("%d ", i);
    }
    LOOP {
        printf("*");
    }
}