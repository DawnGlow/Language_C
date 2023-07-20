// 재귀 함수 (recursive function)
#include <stdio.h>

void rec(int n) {
    if (n > 5) return;
    printf("n = %d\n", n);
    rec(n + 1);
}

// factorial n! = n * (n-1) * ....

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main(void) {
    printf("%d\n", factorial(5));
}