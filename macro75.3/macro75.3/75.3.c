#include<stdio.h>
#include <stdio.h>

#define PRINT_NUM3(x) printf("%d\n", x); \
                      printf("%d\n", x + 1); \
                      printf("%d\n", x + 2);

int main()
{
    int num1 = 1;

    if (num1 == 2) //조건문이나 반복문에서 이렇게 중괄호 없이 시행할경우 첫째줄의 매크로만 조건문이나 반복문의 영향을 받기 때문에 중괄호가 꼭 필요하다.
        PRINT_NUM3(10);    
                           

    return 0;
}