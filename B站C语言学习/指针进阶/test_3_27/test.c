#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		{
//			for (j = 0; j < sz - i - 1; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					//����
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//					
//				} 
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//
//	bubble_sort(arr, sz);
//
//	print_arr(arr, sz);
//
//	return 0;
//}




//void qsort(void* base, //base�д�ŵ��ǣ������������е�һ������ĵ�ַ
//			size_t num, //��������Ԫ�صĸ���
//			size_t size, //������һ��Ԫ�صĴ�С����λ���ֽ�
//			int (*cmp)(const void*, const void*)//�������Ƚϴ����������е�Ԫ�صĺ���
//			);




//#include <stdlib.h>
//#include <string.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//�������ݵ�����
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//��ӡ
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
//}
//
//void test2()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[] = { {"zhangsan",30}, {"lisi", 34}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//��������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}


//#include <stdlib.h>
//#include <string.h>
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����������ź����
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
////qsort - ����������������������͵�����
//
////void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
////	       size_t num,//�����������Ԫ�صĸ���
////	       size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ�
////	       int(* cmp)(const void* e1, const void* e2)//����ָ�� - �ȽϺ���
////          );
//
////__cdecl - ��������Լ��
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//
//
//	//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	//����ʹ��qsort������ṹ������
//	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//}
//
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//
//
//	//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test4()
//{
//	//����ʹ��qsort������ṹ������
//	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_by_name);
//	//qsort(s, sz, sizeof(s[0]), cmp_by_age);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void* ���޾������͵�ָ��,���Բ��ܽ����ò�����Ҳ����+-����
//
//	return 0;
//}




