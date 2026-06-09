/* 인프런 93강 */
/* 제목: 표준 입출력 함수들 */
/*		getchar(), putchar() */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*********** 예제 1 ***********/
	char ch;

	ch = getchar() + 1;
	putchar(ch);

	/*********** 예제 2 ***********/
    char ch;
    // 문자 1개를 저장할 변수

    ch = getchar();
    // 문자 1개를 입력받아서 ch에 저장
    // 예를 들어 Hello 입력 후 엔터를 치면, 처음 ch에는 'H'가 들어감

    while (ch != '\n')
        // ch가 엔터('\n')가 아닐 동안 반복
        // Hello를 입력한 경우:
        // 1회전: ch = 'H'
        // 2회전: ch = 'e'
        // 3회전: ch = 'l'
        // 4회전: ch = 'l'
        // 5회전: ch = 'o'
        // 엔터가 들어오면 반복 종료
    {
        putchar(ch);
        // 현재 ch에 들어있는 문자 1개를 출력
        // Hello 예시:
        // 1회전: H 출력
        // 2회전: e 출력
        // 3회전: l 출력
        // 4회전: l 출력
        // 5회전: o 출력

        ch = getchar();
        // 다음 문자 1개를 다시 입력받아서 ch에 저장
        // Hello 예시:
        // H 다음에 e
        // e 다음에 l
        // l 다음에 l
        // l 다음에 o
        // o 다음에 엔터('\n')
    }

    putchar(ch);
    // while문이 끝났다는 것은 ch가 '\n'이라는 뜻
    // 즉 마지막 엔터를 출력해서 줄바꿈해줌

    /*********** 예제 3 ***********/
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == 'f' || ch == 'F')
        {
            ch = 'X';
        }

        if (ch >= '0' && ch <= '9')
        {
            ch = '*';
        }

        putchar(ch);

    }
    putchar(ch);

	return 0;
}