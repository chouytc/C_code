#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
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
//	return z;//返回z - 返回较大值
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//函数返回类型的地方写成：void，表示这个函数不返回任何值，也不需要返回
//出问题了
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
//	//写一个函数 - 交换两个整形变量的值
//	printf("交换前：a = %d b = %d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//}


//Swap1在被调用时，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
//void Swap1(int x, int y)//传值调用
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//void Swap2(int* pa, int* pb)//传址调用
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
//	//写一个函数 - 交换两个整形变量的值
//
//	Swap1(a, b);//传值调用
//	printf("交换前：a = %d b = %d\n", a, b);
//	Swap2(&a, &b);//传址调用
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}


//1. 写一个函数可以判断一个数是不是素数。
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
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//2. 写一个函数判断一年是不是闰年。
//一个函数不写返回类型，默认返回int类型
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


//3. 写一个函数，实现一个整形有序数组的二分查找。
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
//	//找到了，就返回找到位置的下标
//	//找不到返回-1
//
//	//数组arr传参，实际传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
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


//函数的嵌套调用和链式访问

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
//	//链式访问 - 把一个函数的返回值作为另一个函数的参数
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));//strcpy的返回值是目的地的首地址
//
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知编译器有这么一个函数
//	int Add(int x, int y);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//
////函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}


//函数定义
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

