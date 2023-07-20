#include <stdio.h>
#define PI 3.14159  // 3,14159라는 값 자체가 PI
// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수
// const, 매크로, enum
enum EGameState {
    //  아래 코드는 위 코드와 동일, GAMESTATE_MAINMENU = 0, ---> =0, =1을 안붙혀도 알아서 상수값을 정해준다,
    GAMESTATE_MAINMENU,
    GAMESTATE_PLAYING,
    GAMESTATE_PAUSED = 2,
    GAMESTATE_GAMEOVER,  // 2 다음 3이 대입됨.
    GAMESTATE_LOGO
};

int main(void) {
    // const float PI = 3.14159;  // 상수는 일반적으로 대문자로 표현
    //  에러 : PI *= 2;
    // printf("&PI = %d\n", &PI); // 매크로 선언시 주소 존재 x
    int currState = 0;
    while (1) {
        switch (currState) {
            case GAMESTATE_MAINMENU:
                break;
            case GAMESTATE_PLAYING:
                break;
            case GAMESTATE_PAUSED:
                break;
            case GAMESTATE_GAMEOVER:
                break;
        }
    }
}