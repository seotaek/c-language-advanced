#include<stdio.h>

#define count 10

int main() {
	printf("%d\n", count);
#undef count
#define count 20
	printf("%d\n", count);

	return 0;
}