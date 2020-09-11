#include <stdio.h>

void print(int a, int b)
{
	printf("입력하신 정수는 %d, %d입니다.\n", a, b);
}

int main(void)
{
	int a, b;
	printf("정수 2개를 입력하세요. : ");
	scanf_s("%d %d", &a, &b);
	print(a, b);

	return 0;
}