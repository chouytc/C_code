#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[n];//vs2022 ��֧�ֱ䳤����
//
//	//int a = 10;//��ʼ��
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	//int arr[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = { 'b', 'i', 't' };
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	// b i t \0
//	char ch6[] = { 'b', 'i', 't' };
//	//b i t
//	 
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//���ֵ
//	 
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - �±����ò�����
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("------------------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//%p - �ǰ���ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int *p = arr;//��������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//����
//	//int arr[3][4];
//	//char ch[3][10];
//
//	//��ʼ�� - ������ͬʱ����ֵ
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//����ȫ��ʼ�� - ���油0
//	//int arr[3][4] = { {1,2}, {3,4}, {4,5} };
//
//	//int arr[][4] = { {1,2}, {3,4}, {4,5} };//�п���ʡ�ԣ��в�����ʡ��
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//��ά�����������еĴ洢
//	//int arr[][4] = { {1,2}, {3,4}, {4,5} };//�п���ʡ�ԣ��в�����ʡ��
//	//int i = 0;
//	//int j = 0;
//	//int* p = &arr[0][0];
//
//	//for (i = 0; i < 12; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//}
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)//�β�arr������ָ��
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ���� - ð������
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//���鴫�ε�ʱ��,���ݵ���ʵ��������Ԫ�صĵ�ַ
//
//	return 0;
//}



//��������ʲô?
//��������������Ԫ�صĵ�ַ
//��������������
//1. sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С��λ���ֽ�
//2. &������ - ��������ʾ�������� - ȡ����������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arrȡ����������ĵ�ַ
//
//	printf("%p\n", arr);//2
//	printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//��������ʾ��������
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//
//	return 0;
//}


//ð�������Ż�
void bubble_sort(int arr[], int sz)//�β�arr������ָ��
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//����Ϊ���� - ð������
	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//���鴫�ε�ʱ��,���ݵ���ʵ��������Ԫ�صĵ�ַ

	return 0;
}