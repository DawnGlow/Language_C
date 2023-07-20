#include <stdio.h>
int main(void) {
  int a = 5, b = 3;
  int namuji = a % b;
  printf("%d %% %d = %d\n", a, b, namuji); // 문자열에 % 출력하고 싶으면 %%를 사용하자

/*
float32비트(4바이트) : 3.14라면 314 * 10^(-2) 로 저장 : -2와 314 저장
double64비트(8바이트) : float의 2배 크기
부동소수점(floating point)


2진법

100110(2) = 1*2^5 + 1 * 2^2 + 1 * 2^1 = 38
int - 32비트
00000000 00000000 00000000 00100101
5 = 101(2)
37 = 100101(2)
바이트 : 컴퓨터에서 데이터를 처리하는 가장 작은 단위

자료형 - 정수형, 실수형
정수형
  char (1바이트) - 문자를 담는데 사용
  short(2바이트)
  long(4바이트) - 2147483648 ~ + 2147483647 --> unsigned 420000~~~~
  long long(8바이트)
  int (시스템에 따라서 자동결정, 대체로 long)
  
실수형
  float (4바이트)
  double (8바이트)
  unsigned(부호무시), signed
  unsigned int a;
  void : 리턴값이 없는 함수의 자료형
  bool : 참, 거짓을 저장(최소 8비트를 저장하니깐 =char)
*/
}