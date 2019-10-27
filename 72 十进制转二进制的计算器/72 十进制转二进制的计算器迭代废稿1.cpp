#include <stdio.h>
int main()
{
	int a = 0, b = 0,t=1;
	float c , d;
start:
	c = 0.0, d = 0.0;
	printf ("请输入十进制整数a的值：");
	scanf_s ("%d", &a);
	printf("其对应二进制的值为：");
	while (a != 0)
		{
			if (d == 0)
			{
				b = (a % 2) + 1;
				a = a / 2;
				d = b;
			}
			else if(d==1)
			{
				b = a % 2;
				a = a / 2;
				d = b*10 + d-10;
			}
			else 
			{
				d = d / 10;
				b = a % 2;
				a = a / 2;
				d = b + d;
			}
		};
		printf("%f\n", d);
	goto start;
	return 0;
}