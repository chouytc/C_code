#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[n];//vs2022 不支持变长数组
//
//	//int a = 10;//初始化
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
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
//	printf("%d\n", strlen(ch6));//随机值
//	 
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - 下标引用操作符
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

//%p - 是按地址的格式打印 - 十六进制的打印
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
//	int *p = arr;//数组名是数组首元素的地址
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
//	//创建
//	//int arr[3][4];
//	//char ch[3][10];
//
//	//初始化 - 创建的同时给赋值
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//不完全初始化 - 后面补0
//	//int arr[3][4] = { {1,2}, {3,4}, {4,5} };
//
//	//int arr[][4] = { {1,2}, {3,4}, {4,5} };//行可以省略，列不可以省略
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
//	//二维数组在数组中的存储
//	//int arr[][4] = { {1,2}, {3,4}, {4,5} };//行可以省略，列不可以省略
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

//void bubble_sort(int arr[], int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
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
//	//排序为升序 - 冒泡排序
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//数组传参的时候,传递的其实是数组首元素的地址
//
//	return 0;
//}



//数组名是什么?
//数组名是数组首元素的地址
//但是有两个例外
//1. sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arr取出的是数组的地址
//
//	printf("%p\n", arr);//2
//	printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//数组名表示整个数组
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//数组名是首元素的地址
//
//	return 0;
//}


//冒泡排序优化
void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
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
	//排序为升序 - 冒泡排序
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//数组传参的时候,传递的其实是数组首元素的地址

	return 0;
}