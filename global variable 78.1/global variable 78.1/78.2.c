#include<stdio.h>

int num1 = 10;//�������� ���� �� �� �ʱ�ȭ

void printglobal() {
	printf("%d\n", num1);
}

int main() {
	printf("%d\n", num1);
	num1 = 20;
	printglobal();

	return 0;
}// ���������� �ʱ갪�� �������� ������ 0���� �ʱ�ȭ�� �ȴ�
// ���������� �ʱⰪ�� �������� ������ �����Ⱚ�� �ȴ�.