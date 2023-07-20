#include <stdio.h>
/*
self study 내용
함수의 매개변수에 (void)와 ()의 차이점
C에서는 void를 사용하면 매개변수 없이 실행한다는 것이고, ()을 사용하면 있든 없든 실행 가능하다
Cpp는 ()를 사용한 후 매개변수를 사용해 실행하면, 오류가 나기때문에 컴파일 에러가 발생함.
*/
int main(void) {
    printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
    int a; char b; float c; double d;
    printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));


    int p = 3.14;
    double q = 10;
    printf("%d %f\n", p, q);
    // 정수형 변수에 실수를 저장할 수 있고, 실수형 변수에 정수를 저장할 수 있다.
    // 정수형 변수에 실수를 저장하면 소수점이 사라지고 정수값만 저장

    /* 형변환 */
    // 형변환 : 자료형을 다른 자료형으로 바꾸는 작업
    int math = 90, korean = 95, english = 96;
    int sum = math + korean + english;
    double avg = sum / 3;
    printf("%f\n", avg); // 93.666667 이 출력 되지 않는다.
    // 정수 / 정수 = 정수
    // 실수 / 정수 = 실수
    // 정수 / 실수 = 실수
    // 실수 / 실수 = 실수
    // 위를 해결하는 방법은 여러가지. double(sum)을 사용하거나 3.0 사용
    double avg2 = sum / 3.0;
    printf("%f\n", avg2);
    return 0; 
}
// sizeof(x) : x의 크기를 알려줌
// x: 형(int, float, ...), 변수이름