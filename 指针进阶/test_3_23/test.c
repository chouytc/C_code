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


//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//
//	return 0;
//}



//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д�����?
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������
//
//	printf("%d\n", a);
//	
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//
//	//pf����һ������ָ�����
//	int(*pf)(int, int) = &Add;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	return 0;
//}



//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void(*pt)(char*) = &test;
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//	//int(*pf)(int, int) = &Add;
//
//	int(*pf)(int, int) = Add;//Add === pf
//	int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2    //1,2,3���ַ�ʽ�ȼ�
//	//int ret = Add(3, 5);//3
//
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//0x0012ff48 - int

//int main()
//{
//	(*(void (*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)() - ����ָ������
//	//2. (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//���ԡ�C�����ȱ�ݡ�
//
//	return 0;
//}


////1
//void (*signal(int, void(*)(int)))(int);
////typedef - �����ͽ����ض���
//
////2
//typedef void(*pfun_t)(int);//��void(*)(int)��ָ������������δpfun_t
//pfun_t signal(int, pfun_t);
//
////1. signal ��()�Ƚ�ϣ�˵��signal�Ǻ�����
////2. signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ��
////�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
////3. signal�����ķ�������Ҳ��һ������ָ��
////�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
////signal ��һ������������
//
//int main()
//{
//	return 0;
//}



//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ������ int* arr[5];

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add, Sub };//pfArr[2]���Ǻ���ָ������ - ͬ���ͺ���ָ��
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1. add       2. sub*****\n");
//	printf("*****3. mul       4. div*****\n");
//	printf("******      0. exit     *****\n");
//	printf("*****************************\n");
//}
//
//int main()
//{
//	//������ - �������α����ļӡ������ˡ���
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1. add       2. sub*****\n");
//	printf("*****3. mul       4. div*****\n");
//	printf("******      0. exit     *****\n");
//	printf("*****************************\n");
//}
//
//int main()
//{
//	//������ - �������α����ļӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		//pfArr���Ǻ���ָ������
//		//ת�Ʊ� - C��ָ��
//		int(*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����,����ѡ��\n");
//		}
//
//
//	} while (input);
//
//	return 0;
//}



//int main()
//{
//	int arr[10];
//	//����Ԫ�ص����� - int
//	//arr����������� int[10]
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1. add       2. sub*****\n");
//	printf("*****3. mul       4. div*****\n");
//	printf("******      0. exit     *****\n");
//	printf("*****************************\n");
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	//������ - �������α����ļӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


