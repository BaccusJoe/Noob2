#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Book//创建结构体类型
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "王道",99};
	struct Book* pb = &b1;
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	//用指针的方法引用
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	b1.price = 15;
	return 0;
}