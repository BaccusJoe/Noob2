求两个整数的和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}

自定义函数
int Add(int a, int b)
{
	int z = a + b;
	return z;
}
int main()
{
	int sum = 0;
	int a = 10;
	int b = 50;
	sum = Add(a, b);
	printf("sum=%d", sum);
	return 0;
}

交换两个整型的值
int main()
{
	int a = 3;
	int b = 7;
	printf("交换前：a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}
int max(int a,int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int a = 0;
	int b = 0;
	int MAX = 0;
	scanf("%d,%d", &a, &b);
	MAX = max(a, b);
	printf("MAX=%d", MAX);
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d,%d", &a, &b);
	if (a > b)
		printf("较大值为:%d\n", a);
	else
		printf("较大值为:%d\n", b);
	return 0;
}
