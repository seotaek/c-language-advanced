#include<stdio.h>

void increaseNumber() {
	static int num1 = 0;// ���������� �������� �ʰ� ���������� �����Ұ��
	printf("%d\n", num1);
	num1++;
}

int main() {
	increaseNumber();// �����Լ������� increaseNumber���� num1�� ���� ����ü� �����Ƿ�
	//��� 0���� ��µȴ�.
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}