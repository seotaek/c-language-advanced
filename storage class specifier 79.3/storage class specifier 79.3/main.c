#include<stdio.h>

static void print() // 정적함수가 아닌 일반 함수로 받을경우
{//print.c에서 설정한 print함수와 충돌이 일어나 컴파일 에러 발생
	printf("main.c\n");
}

int main() {
	print();

	return 0;
}