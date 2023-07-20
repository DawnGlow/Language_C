#define PI 3.14159
#define PRINT_HELLO printf("hello\n");
#define SQUARE(X) ((X) * (X))  // SQUARE라는 매크로는 X를 매개변수로 갖는데 X*X에 별명을 붙혀줌., 계산 우선순위 때문에 괄호를 붙혀주자.
#include <stdio.h>
int square(int a) {
    return a * a;
}

int main(void) {
    PRINT_HELLO
    int a;
    scanf("%d", &a);
    printf("%d\n", SQUARE(a - 1));  // a - 1 * a - 1 ==> -1이 되버림. // 결론은 a-1 자체가 계산이 되서 대입되는게 아니라 그대로 대치되서 식에 대입된 후 계산된다.
    // 그래서 매크로의 매개변수에는 꼭 괄호를 사용해줘야한다.
}