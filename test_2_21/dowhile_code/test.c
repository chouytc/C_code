#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

// while for do while

//1. ���� n�Ľ׳ˡ�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0! = 1\n");
//	}
//	else
//	{
//		for (i = n; i >= 1; i--)
//		{
//			sum = sum * i;
//		}
//		printf("%d! = %d", n, sum);
//	}
//
//	return 0;
//}

//2. ���� 1!+2!+3!+����+10!
//int main()
//{
//	int i = 0;
//	int add = 0;
//	int sum = 1;
//		for (i = 1; i <= 10; i++)
//		{
//			sum = sum * i;
//			add = sum + add;
//		}
//
//	printf("%d\n", add);
//
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	//��arr������������У�����k��7����ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}

	return 0;
}