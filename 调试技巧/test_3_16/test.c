#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}


//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//1! + 2! + 3!
//	//1  + 2  + 6 = 9
//	//1*2*...*n
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0 - 9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//��������н����ʲô��
//
//	return 0;
//}


//Ԥ����������
//ͨ������ļ��ɣ����ٴ���

//ģ��ʵ�� strcpy
//strcpy - �ַ�������

//#include <string.h>

//д�Ĳ���
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

#include <assert.h>

//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ�Ӧ�ñ��޸�
//
//strcpy �����������ʵ���ص���Ŀ��ռ����ʼ��ַ
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello�Ŀ���
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//
//	return 0;
//}


//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//2.
//	//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
//	//
//
//	//const int num = 10;
//	////num = 20;//err
//
//	//const int num = 10;
//	////num = 20;//err
//
//	//int* const p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*���ұߣ����ε���p����ʾָ��������ܱ��ı�
//	////      ����ָ��ָ������ݣ����Ըı�
//	//*p = 20;//ok
//	//p = &n;//err
//
//	//const int* p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	////      ����ָ����������ǿ����޸ĵ�
//	//*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}


//strlen �����ַ������ȵ�
//my_strlen
//1. const
//2. assert

#include <assert.h>
//��׳��
//³����
//size_t - unsigned int
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";

	printf("%d\n", my_strlen(arr));

	return 0;
}
