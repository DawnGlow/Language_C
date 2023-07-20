#include <stdio.h>

struct Point {
    int x, y;
    void moveRight() { x++; }
    void moveLeft() { x--; }
    void moveUP() { y++; }
    void moveDown() { y--; }
    void PrintData() { printf("x : %d, y : %d\n", x, y); }
};

int main() {
    Point p = {2, 5};
    p.moveDown();
    p.moveLeft();
    p.PrintData();
}