#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入一个数：");
//	scanf("%d", &a);
//	b = a % 2;
//	printf("%d\n", b);
//	if (1 == b)
//	{
//		printf("为奇数\n");
//	}
//	else
//		printf("为偶数\n");
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	printf("输入一个数：");
	scanf("%d", &a);
	b = a % 2;
	switch (b)
	{
	case 1:
		printf("该数为奇数\n");
		break;
	case 0:
		printf("该数为偶数\n");
		break;
	}
	return 0;
}