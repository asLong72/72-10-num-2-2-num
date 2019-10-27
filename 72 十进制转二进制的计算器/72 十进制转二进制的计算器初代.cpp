#include <stdio.h>
int main()
{
	int a = 0, b = 0, t;
	float c, d;
start:
	printf("请输入十进制整数a的值：");
	scanf_s("%d", &a);
	printf("其对应二进制的值为：");
	while (a != 0)
	{
		b = a % 2;
		a = a / 2;
		printf("%d\n", b);
	};
	goto start;
	return 0;
}