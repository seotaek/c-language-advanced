#include<stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG
	printf("Debug: %s %s %s %d\n",__DATE__, __TIME__, __FILE__, __LINE__);
#endif

	return 0;
}
//printf�ȿ��� ����� __DATE__, __TIME__, __FILE__, __LINE__�� �����Ϸ����� �����ϴ� ��ũ���̸� ����� �ڵ带 �ۼ��� �� �����մϴ�.

//__DATE__: �������� ��¥(���� ������ ���� ��¥�� �ƴ�)
//__TIME__ : �������� �ð�(���� ������ ���� �ð��� �ƴ�)
//__FILE__ : __FILE__ ��ũ�ΰ� ���� ���, �ҽ� ����
//__LINE__ : __LINE__ ��ũ�ΰ� ���� �� ��ȣ