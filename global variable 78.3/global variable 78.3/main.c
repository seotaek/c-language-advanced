#include<stdio.h>

extern int num1;//다른 소스파일에 있는 전역변수 num1을 사용

int main() {
	printf("%d\n", num1);

	return 0;
}