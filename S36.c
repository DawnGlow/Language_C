// 배열을 매개변수로 넘기기
#include <stdio.h>

void doublearr(int *arr) {  // void dublearr(int arr[4]) 랑 비슷합
    for (int i = 0; i < 4; i++) {
        arr[i] *= 2;  // arr[i] == *(arr + i)
    }
}
void printbrr(int (*brr)[3]) { // 2차원 배열 : 배열 포인터 사용.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
}

void printarr(int arr[4]) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
}
int main(void) {
    int arr[4] = {1, 2, 3, 4};
    int brr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    doublearr(arr);  // call by reference
    printbrr(brr); // call by reference
    printarr(arr);
}