#include<stdio.h>

void increaseNumber() {
	static int num1 = 0;// 정적변수로 선언하지 않고 지역변수로 선언할경우
	printf("%d\n", num1);
	num1++;
}

int main() {
	increaseNumber();// 메인함수에서는 increaseNumber에서 num1의 값을 끌어올수 없으므로
	//계속 0으로 출력된다.
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}