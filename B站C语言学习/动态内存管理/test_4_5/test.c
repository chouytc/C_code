#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	int a = 10;//4个字节
//	int arr[10];//40个字节
//
//	return 0;
//}



//#include <errno.h>
//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用内存
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用内存
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//	frre(p);
//	p = NULL;
//
//	return 0;
//}




//int main()
//{
//	int* p = NULL;
//	free(p);
//
//	return 0;
//}



//int main()
//{
//	//开辟10个整形空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}





//int main()
//{
//	realloc(NULL, 40);//malloc(40)
//
//	return 0;
//}


