#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//	//�������ǰ�"hello bit"����ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";
//	char arr[] = "hello bit";
//
//	//printf("%c\n", *ps);
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//int main()
//{
//	//ָ������
//	//���� - �����д�ŵ���ָ��(��ַ)
//	//int* arr[3];//�������ָ�������
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* arr[3] = { &a, &b, &c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//����ָ�� - ��ָ�������ָ��
// 
//��һ��ָ��
//����ָ�� - ��ָ�����ε�ָ��
//�ַ�ָ�� - ��ָ���ַ���ָ��
//int* p;

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd ����һ������ָ��
//
//	//int arr[10] = { 1,2,3,4,5 };
//	//int(*parr)[10] = &arr;//ȡ����������ĵ�ַ
//
//	//parr ����һ������ָ�� - ���д�ŵ�������ĵ�ַ
//
//	//arr;//����������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);
//
//	printf("%p\n", p1);
//	printf("%p\n", p2 + 1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i - 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////p��һ������ָ��
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *((*(p + i)) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//int a[5]; &a
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);//arr����������ʾ������Ԫ�صĵ�ַ
//	return 0;
//}


