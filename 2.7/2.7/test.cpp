//
//#include<stdio.h>
////��һ�����������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;//��Ҫ�ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//	int left = 0, right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k == arr[mid])
//		{
//			printf("�����ֵ��±���%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			left = mid + 1;
//	}
//	if (left > right)
//	{
//		printf("�Ҳ��������֣�");
//	}
//	
//	return 0;
//}



//��д���룬��ʾ����ַ��������ƶ������м��ۡ�

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//		char arr1[]="welcome to bit!!!!!!";
//		char arr2[]="####################";
//		int sz = strlen(arr1);
//		int left = 0, right = sz - 1;
//		while (left <= right)
//		{
//			
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s\n", arr2);
//			left++;
//			right--;
//		}
//		return 0;
//
//}

//������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
//#include <stdio.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = {'b', 'i', 't', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//�ص�
////�����ַ�������ʱ �����arr1�������壬��Ĭ�����������\0
////����arr2һ����������\0  ���ҵ���strlen���ַ�������ʱ��arr3�е�\0������ʹ��+1






/*��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
��ʾ��¼�ɣ�������ξ�����������˳�����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]= {};
	
	int i = 0;
	//����������123456
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password); 
		if (strcmp(password, "123456") == 0)//һ��Ҫ��˫���������� ��Ȼ��Ϊ����123456
		{
			printf("������ȷ��");
			break;
		}
		else
			printf("����������������룡\n");
	}
	if (i == 3)
	{
		printf("������������˳�����");
	}
	return 0;
}

/*�ĵ�
��˫���š����������Ĳ��������ֻ�����ĸ��Ϊ�ַ���    ������������������Ϊ�ַ�*/
