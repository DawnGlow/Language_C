// getchar / putchar --> 문자 1개 입출력시 훨씬 빠름
// getchar : 문자를 입력받아 그 문자를 리턴
// gets / puts
// sscanf
#include <stdio.h>

int main() {
    char ch;
    ch = getchar();
    putchar(ch);
    char str[100];
    gets(str);
    puts(str);
}