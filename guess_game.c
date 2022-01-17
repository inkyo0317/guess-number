#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    * 변수 answer에는 랜덤으로 1 ~ 50 사이의 정수 하나가 저장됩니다.
    * 변수 userGuess에는 플레이어에게 입력받은 정수가 저장됩니다.
    * userGuess에 저장된 값이 answer에 저장된 값과 같을 때까지 반복합니다.
    *     시도 횟수(변수 tries의 값)을 증가시킵니다.
    *     userGuess가 answer보다 크면 "높네요. 낮추세요." 출력
    *     userGuess가 answer보다 작으면 "낮네요. 높이세요." 출력
    *     정수 하나를 변수 userGuess에 다시 입력받습니다. (위에 있는 ‘정수 하나를 입력받는 코드’ 그대로 재사용)
    * 정답을 맞추면 "정답입니다. N번만에 성공!" 출력
    */

int main()
{
    printf("< 1 ~ 50 사이 숫자 맞추기 게임 >\n\n");
    srand(time(0));
    int answer = rand() % 50 + 1; // 1 ~ 50까지의 랜덤 정수

    /* 정수 하나를 입력받는 코드 시작 */
    int userGuess;
    printf("정수를 하나 입력해 주세요: ");
    scanf_s("%d", &userGuess);

    int tries = 1;

    while (answer != userGuess)
    {
        tries++;
        if (userGuess > answer)
        {
            printf("높네요. 낮추세요."); // userGuess 값이 answer 값보다 큰 경우, 값을 낮추라고 지시.
        }
        else
        {
            printf("낮네요. 높이세요."); // userGuess 값이 answer 값보다 작은 경우, 값을 높이라고 지시.
        }
        printf("\n정수를 하나 입력해 주세요: ");
        scanf_s("%d", &userGuess);
    }
    printf("\n정답입니다! %d번만에 성공!\n", tries);
}