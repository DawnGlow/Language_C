#include <stdio.h>

typedef struct {
    int num;         // 4바이트
    char name[100];  // 100바이트
    int cost;        // 4바이트
} ProductInfo;

int main(void) {
    ProductInfo myProduct = {4797283, "제주 한라봉", 19900};
    printf("상품 번호 : %d\n", &myProduct.num);
    printf("이름 : %d\n", &myProduct.name);
    printf("가격 : %d\n", &myProduct.cost);
    // 구조체가 선언된 순서대로 공간을 붙어서 차지하고 있음.
    printf("사이즈 : %d\n", sizeof(myProduct));
    printf("%d\n", &myProduct);
}