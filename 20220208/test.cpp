//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//�������������Ӵ�С���
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int switch;

void Switch(int &x, int &y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	
}
int main()
{
	int a, b, c;
	//����
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		Switch(&a, &b);
	}
	if (a < c)
	{
		Switch(&a, &c);
	}
	if (b < c)
	{
		Switch(&b, &c);
	}
	//�Ӵ�С���
	printf("%d %d %d", a, b, c);
	return 0;

}