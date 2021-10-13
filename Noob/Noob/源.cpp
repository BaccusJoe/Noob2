//ÇóÁ½¸öÕûÊýµÄºÍ
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
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));//计算字符串长度
	printf("%c\n", '\32');
	return 0;
}
int main()
{
	int input = 0;
	printf("饿了吃饭么\n");
	printf("想吃什么？");
	scanf("%d", &input);
	if (input == 1)
		printf("吃苹果\n");
	else
		printf("吃香蕉\n");
	return 0;
}
int main()
{
	int line = 0;
	printf("打开游戏");
	while(line < 100)
	{
		printf("打怪升级，level=%d\n", line);
		line++;
	}
	if (line >= 100)
		printf("屠龙宝刀\n");
	return 0;
}
