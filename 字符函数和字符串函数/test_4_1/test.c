#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr[] = "abcdef";//abcdef\0
//	//char arr[] = { 'b', 'i', 't' };//len�����ֵ
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




////ģ��ʵ��
//#include <assert.h>
//
////����������
////ָ��-ָ��
////�ݹ�ķ�ʽ
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
//	//name = "zhangsan";//err,name��������ַ����ַ��һ�����������ܱ���ֵ
//
//	printf("%s\n", name);
//
//	return 0;
//}




//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//Ŀ�����򲻿��޸�
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
////�ַ���׷��
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1. �ҵ�Ŀ��ռ��'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. �����ַ���
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
//	//�Լ����Լ�׷��
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



