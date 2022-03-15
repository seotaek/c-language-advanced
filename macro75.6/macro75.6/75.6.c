#include<stdio.h>

#define executer(x)  hello##x()

void hello1() {
	printf("hello 1\n");
}

void hello2() {
	printf("hello 2\n");
}

int main() {
	executer(1);
	executer(2);
	return 0;
}