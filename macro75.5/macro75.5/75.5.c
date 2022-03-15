#include<stdio.h>

#define MUL(a,b) ((a)*(b))
#define ADD(a,b) ((a)+(b))

int main() {
	printf("%d\n", MUL(10, 20));
	printf("%d\n", MUL(1 + 2, 3 + 4));

	printf("%d\n", ADD(1, 2));
	printf("%d\n", ADD(1, 2) * 3);

	return 0;
}
//만약 매크로를 정의하는 과정에서 괄호가 없으면
//1+2*3+4의 형식으로 계산이 이루어져 원하는 결과가 나오지 않는다.