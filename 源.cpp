#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����һ������");
//	scanf("%d", &a);
//	b = a % 2;
//	printf("%d\n", b);
//	if (1 == b)
//	{
//		printf("Ϊ����\n");
//	}
//	else
//		printf("Ϊż��\n");
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	printf("����һ������");
	scanf("%d", &a);
	b = a % 2;
	switch (b)
	{
	case 1:
		printf("����Ϊ����\n");
		break;
	case 0:
		printf("����Ϊż��\n");
		break;
	}
	return 0;
}