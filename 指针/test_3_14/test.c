#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;//ռ4���ֽ�
//	int* pa = &a;//�õ�����a���ĸ��ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//	return 0;
//}


//int main()
//
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}


//ָ�����͵�����
//1. ָ�����;����ˣ�ָ������õ�Ȩ���ж���ܲ��������ֽڣ�
//2. ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	//0 1 2 3 4 5 6 7 8 9 A B C D E F
//	//11111111
//	//    8421
//
//	//int a = 0x11223344;
//	//char* pc = &a;
//	//*pc = 0;
//
//	//int* pa = &a;
//	//*pa = 0;
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	//1.δ��ʼ��
//	//�����p����һ��Ұָ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���
//
//	//2.Խ�����
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C���Ա����ǲ����������Խ����Ϊ��
//	int* p = NULL;
//
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ���ָ�������ǰ��:
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &c[0]);//ָ�� - ָ�룬�õ���������ָ��֮���Ԫ�ظ���
//
//	return 0;
//}

//#include <string.h>
//������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//ָ�� - ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen(); - ���ַ�������
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p + 2)
//	// [] ��һ��������  2��arr������������
//	// a + b
//	// b + a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	//arr[2] --> *(arr+2) --> *(2 + arr) --> 2[arr]
//
//	//arr[2] <==> *(arr + 2) <==> *(p + 2) <==> *(2 + p) <==> *(2 + arr) == 2[arr]
//	//2[arr] <==> *(2 + arr)
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//
//	//ppa����һ������ָ�����
//	int** ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//	int*** pppa = &ppa;
//
//	return 0;
//}


//ָ������ - ����
int main()
{
	int arr[10];//�������� - ������ε�����
	char ch[5];//�ַ����� - ��ŵ����ַ�

	//ָ������ - ���ָ�������
	int* parr[5];//����ָ������
	char* pch[5];//�ַ�ָ������

	return 0;
}