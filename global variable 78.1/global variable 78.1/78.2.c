#include<stdio.h>

int num1 = 10;//전역변수 선언 및 값 초기화

void printglobal() {
	printf("%d\n", num1);
}

int main() {
	printf("%d\n", num1);
	num1 = 20;
	printglobal();

	return 0;
}// 전역변수는 초깃값을 지정하지 않으면 0으로 초기화가 된다
// 지역변수는 초기값을 지정하지 않으면 쓰레기값이 된다.