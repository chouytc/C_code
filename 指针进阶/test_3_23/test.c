#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中
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
//	//指针数组
//	//数组 - 数组中存放的是指针(地址)
//	//int* arr[3];//存放整形指针的数组
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


//数组指针 - 是指向数组的指针
// 
//是一种指针
//整形指针 - 是指向整形的指针
//字符指针 - 是指向字符的指针
//int* p;

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd 就是一个数组指针
//
//	//int arr[10] = { 1,2,3,4,5 };
//	//int(*parr)[10] = &arr;//取出的是数组的地址
//
//	//parr 就是一个数组指针 - 其中存放的是数组的地址
//
//	//arr;//数组名是首元素的地址 - arr[0]的地址
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
////p是一个数组指针
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
//	print2(arr, 3, 5);//arr数组名，表示数组首元素的地址
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
//	//p是一级指针
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
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//把二级指针进行传参呢?
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
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
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//
//	//pf就是一个函数指针变量
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
//	//pf就是一个函数指针变量
//	//int(*pf)(int, int) = &Add;
//
//	int(*pf)(int, int) = Add;//Add === pf
//	int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2    //1,2,3三种方式等价
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
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void(*)() - 函数指针类型
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//出自《C陷阱和缺陷》
//
//	return 0;
//}


////1
//void (*signal(int, void(*)(int)))(int);
////typedef - 对类型进行重定义
//
////2
//typedef void(*pfun_t)(int);//对void(*)(int)的指针类型重命名未pfun_t
//pfun_t signal(int, pfun_t);
//
////1. signal 和()先结合，说明signal是函数名
////2. signal函数的第一个参数的类型是int，第二个参数的类型是函数指针
////该函数指针，指向一个参数为int，返回类型是void的函数
////3. signal函数的返回类型也是一个函数指针
////该函数指针，指向一个参数为int，返回类型是void的函数
////signal 是一个函数的声明
//
//int main()
//{
//	return 0;
//}



//函数指针数组 - 存放函数指针的数组
// 
//整形指针 int*
//整形指针数组 int* arr[5];

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
//	int(*pfArr[2])(int, int) = { Add, Sub };//pfArr[2]就是函数指针数组 - 同类型函数指针
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
//	//计算器 - 计算整形变量的加、减、乘、除
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
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
//	//计算器 - 计算整形变量的加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		//pfArr就是函数指针数组
//		//转移表 - C和指针
//		int(*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误,重新选择\n");
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
//	//数组元素的类型 - int
//	//arr数组的类型是 int[10]
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
//	printf("请输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	//计算器 - 计算整形变量的加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
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
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


