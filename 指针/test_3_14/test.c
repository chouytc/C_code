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


