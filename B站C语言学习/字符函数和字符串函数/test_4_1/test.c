#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr[] = "abcdef";//abcdef\0
//	//char arr[] = { 'b', 'i', 't' };//len是随机值
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}




//int main()
//{
//	//          3                  6
//	if (strlen('abc') - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}




////模拟实现
//#include <assert.h>
//
////计数器方法
////指针-指针
////递归的方式
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//
//	return 0;
//}




//int main()
//{
//	char name[20] = "xxxxxxxx";
//	//"zhangsan"
//	//string copy
//	char arr[] = { 'b', 'i', 't' };
//	strcpy(name, arr);
//
//	//strcpy(name, "zhang\0san");
//	//name = "zhangsan";//err,name数组名地址，地址是一个常量，不能被赋值
//
//	printf("%s\n", name);
//
//	return 0;
//}




//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//目标区域不可修改
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des && src);
//	char* ret = des;
//	while (*des++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
////字符串追加
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1. 找到目标空间的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 拷贝字符串
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	//自己给自己追加
//	my_strcat(arr1, arr1);
//
//	printf("%s\n", arr1);
//
//	//char arr1[] = "abcdef";
//	//char arr2[20] = { 0 };
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}



