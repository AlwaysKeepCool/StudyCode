
#include<stdio.h>
//��һ�����������в��Ҿ����ĳ������n 
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 10;//��Ҫ�ҵ���
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
	int left = 0, right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k == arr[mid])
		{
			printf("�����ֵ��±���%d\n", mid);
			break;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	if (left > right)
	{
		printf("�Ҳ��������֣�");
	}
	
	return 0;
}











