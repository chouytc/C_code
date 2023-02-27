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
void Swap1(int x, int y)//传值调用
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}

void Swap2(int* pa, int* pb)//传址调用
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//写一个函数 - 交换两个整形变量的值

	Swap1(a, b);
	printf("交换前：a = %d b = %d\n", a, b);
	Swap2(&a, &b);
	printf("交换后：a = %d b = %d\n", a, b);

	return 0;
}



