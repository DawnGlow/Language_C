#include <stdio.h>

typedef struct {
    int num;
    char name[100];
    int cost;
} productinfo;

/*void productsale(productinfo p, int percent) {
    p.cost -= p.cost * percent / 100;
}
*/
void productsale(productinfo *p, int percent) {
    p->cost -= p->cost * percent / 100;
}

void productswap(productinfo *a, productinfo *b) {
    productinfo tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    productinfo myproduct = {48884, "제주 한라봉", 20000};
    productinfo myproduct2 = {48823, "성주 꿀참외", 10000};

    // productsale(myproduct, 10); // call by value
    productsale(&myproduct, 10);  // call by reference;
    productswap(&myproduct, &myproduct2);
}