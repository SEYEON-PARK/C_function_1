#include <stdio.h>

void print(int a, int b)
{
	printf("�Է��Ͻ� ������ %d, %d�Դϴ�.\n", a, b);
}

int main(void)
{
	int a, b;
	printf("���� 2���� �Է��ϼ���. : ");
	scanf_s("%d %d", &a, &b);
	print(a, b);

	return 0;
}