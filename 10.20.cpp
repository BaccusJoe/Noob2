#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Book//�����ṹ������
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "����",99};
	struct Book* pb = &b1;
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	//��ָ��ķ�������
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	b1.price = 15;
	return 0;
}