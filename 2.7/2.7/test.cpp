//
//#include<stdio.h>
////在一个有序数组中查找具体的某个数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;//需要找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
//	int left = 0, right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k == arr[mid])
//		{
//			printf("该数字的下标是%d\n", mid);
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
//		printf("找不到该数字！");
//	}
//	
//	return 0;
//}



//编写代码，演示多个字符从两端移动，向中间汇聚。

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

//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
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
//重点
////定义字符型数组时 如果像arr1这样定义，则默认在其后面有\0
////若像arr2一样则必须加上\0  并且当用strlen求字符串长度时，arr3中的\0并不会使其+1






/*编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
提示登录成，如果三次均输入错误，则退出程序。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]= {};
	
	int i = 0;
	//假设密码是123456
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password); 
		if (strcmp(password, "123456") == 0)//一定要用双引号括起来 不然就为整形123456
		{
			printf("密码正确！");
			break;
		}
		else
			printf("密码错误请重新输入！\n");
	}
	if (i == 3)
	{
		printf("密码错误三次退出程序");
	}
	return 0;
}

/*心得
用双引号“”括起来的不管是数字还是字母均为字符串    ‘‘单引号括起来的为字符*/
