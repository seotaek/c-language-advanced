#include <stdio.h>

int main(int argc, char* argv[])      // 옵션의 개수와 옵션 문자열을 배열로 받음
{
    for (int i = 0; i < argc; i++)    // 옵션의 개수만큼 반복
    {
        printf("%s\n", argv[i]);      // 옵션 문자열 출력
    }// 명령 프롬프트를 열어 실행파일 이름과 옵션을 그대로 출력 한다.

    return 0;
}