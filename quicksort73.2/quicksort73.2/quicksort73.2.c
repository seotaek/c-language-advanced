#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;
	else if (num1 > num2)
		return 1;
	else
		return 0;
}

int main() {
	int numArr[10] = { 8,4,2,5,3,7,10,1,6,9 };
	qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

	for (int i = 0; i < 10; i++) {
		printf("%d ", numArr[i]);
	}
	printf("\n");

	return 0;
}
//qsort(정렬할배열, 요소개수, 요소크기, 비교함수);
//qsort(정렬할메모리주소, 요소개수, 요소크기, 비교함수);