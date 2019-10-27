#include <stdio.h>
int main()
{
	int a = 0, b = 0,t=1;
	float c , d;
start:
	c = 0.0;
	printf ("请输入十进制整数a的值：");
	scanf_s ("%d", &a);
	printf("其对应二进制的值为：");
	while (a != 0)
	{
		b = a % 2;
		a = a / 2;
		switch (b)
		{
		case 0:
			c = c + b;
			c = c * 0.1;
			break;
		case 1:
			c = c + b;
			c = c * 0.1;
			break;
		}
	};
		printf("%d\n", (int)c );
	goto start;
	return 0;
}