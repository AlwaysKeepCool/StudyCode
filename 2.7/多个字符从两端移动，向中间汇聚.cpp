//��д���룬��ʾ����ַ��������ƶ������м��ۡ�

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int sz = strlen(arr1);
	int left = 0, right = sz - 1;
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;

}

//������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
#include <stdio.h>

int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
//�ص�
//�����ַ�������ʱ �����arr1�������壬��Ĭ�����������\0
//����arr2һ����������\0  ���ҵ���strlen���ַ�������ʱ��arr3�е�\0������ʹ��+1