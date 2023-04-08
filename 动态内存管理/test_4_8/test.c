#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//1. 对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//2. 对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//访问
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}




//3. 对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//...
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//4. 使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//5. 对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	//...
//
//	free(p);
//	p = NULL;
//
//	free(p);//重复释放
//
//	return 0;
//}




//6. 动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//	//...
//
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//......
//
//	return 0;
//}


//int* test()
//{
//	//开辟的
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//...
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//	//忘记释放了
//
//
//	return 0;
//}





//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	//str存放的就是，动态开辟的100字节的地址
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}



//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//str存放的就是，动态开辟的100字节的地址
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}




//int main()
//{
//	printf("hello world\n");
//	char* p = "hello world\n";
//	printf(p);
//	printf("%s", p);
//
//	return 0;
//}




