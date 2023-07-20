#include <iostream>
using namespace std;
void swap(int &x, int &y) { // reference 변수는 cpp에서만 작동
  int tmp = x;
  x = y;
  y = tmp;
}

int main(void) {
  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << b << endl;
}