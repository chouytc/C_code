#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//����z - ���ؽϴ�ֵ
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//�����������͵ĵط�д�ɣ�void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//��������
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - �����������α�����ֵ
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	Swap(a, b);
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//}


//Swap1�ڱ�����ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��
//void Swap1(int x, int y)//��ֵ����
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//void Swap2(int* pa, int* pb)//��ַ����
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - �����������α�����ֵ
//
//	Swap1(a, b);//��ֵ����
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	Swap2(&a, &b);//��ַ����
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}


//1. дһ�����������ж�һ�����ǲ���������
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//2. дһ�������ж�һ���ǲ������ꡣ
//һ��������д�������ͣ�Ĭ�Ϸ���int����
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int *a, int k, int s)
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��ˣ��ͷ����ҵ�λ�õ��±�
//	//�Ҳ�������-1
//
//	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
//	//��������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//
//	return 0;
//}


//������Ƕ�׵��ú���ʽ����

//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}



//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//��ʽ���� - ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));//strcpy�ķ���ֵ��Ŀ�ĵص��׵�ַ
//
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ�� - ��֪����������ôһ������
//	int Add(int x, int y);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//
////��������
//int Add(int x, int y)
//{
//	return x + y;
//}


//��������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}



//#include "add.h"
//#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;

	//int c = Add(a, b);
	int c = Sub(a, b);
	printf("%d\n", c);

}

