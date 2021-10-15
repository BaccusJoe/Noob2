#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN(x,y) (x<y?x:y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	int min = 0;
//	scanf("%d %d",&a,&b);
//	min = MIN(a, b);
//	max = (a > b ? a : b);
//	printf("max=%d", max);
//	printf("min=%d", min);
//	return 0;
//}
int main()
{
	int a = 10;
	int* p = &a;//取地址，p为指针变量,用来存放a的地址
	printf("%p\n", &a);//打印地址
	printf("%p\n", p);
	return 0;
}