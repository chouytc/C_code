#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	//两个字符串比较
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//
//	//比较一下两个字符串是否相等
//	//arr1是数组名，数组名是数组首元素地址
//	//arr2是数组名，数组名是数组首元素地址
//	//if (arr1 == arr2)
//	//{
//	//	printf("==\n");
//	//}
//	//else
//	//{
//	//	printf("!=\n");
//	//}
//
//	return 0;
//}




//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello bit");
//
//	printf("%s\n", arr);
//
//	return 0;
//}



//长度受限的字符串函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	strncpy(arr1, arr2, 5);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//int main()
//{
//	//strncat
//	char arr1[20] = "hello ";
//	char arr2[] = "word";
//
//	strncat(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}




//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = strcmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	//if (ret == 0)
//	//	printf("==\n");
//	//else if (ret < 0)
//	//	printf("<\n");
//	//else
//	//	printf(">\n");
//
//	return 0;
//}



//int main()
//{
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 !='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	//char email[] = "zpw@bitejiuyeke.com";
//	//char substr[] = "bitejiuyeke";
//	//char* ret = my_strstr(email, substr);
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//strtok
//切割字符串
//
//zhangpengwei@bitejiuyeke.com


//int main()
//{
//	const char* sep = "@.";
//	char email[] = "zhangpengwei@bitejiuyeke.com.net";
//	char cp[40] = { 0 };
//	strcpy(cp, email);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	return 0;
//}


//C语言的库函数，在执行失败的时候，都会设置错误码
//#include <errno.h>
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//errno - C语言设置的一个全局的错误码存放的变量
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		//
//	}
//
//	return 0;
//}


//#include <ctype.h>
//
//int main()
//{
//	//int a = isspace(' ');
//	//printf("%d\n", a);
//
//	//int a = isdigit('x');
//	//printf("%d\n", a);
//
//	printf("%c\n", tolower('W'));
//
//	return 0;
//}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

//memcpy 负责拷贝两块独立空间中的数据
//重叠内存的拷贝，是怎么做的呢》memmove
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	             //1,2,1,2,3,4,5,8,9,10
	//int arr2[10] = { 0 };
	//my_memcpy(arr2, arr1, 28);
	my_memcpy(arr1 + 2, arr1, 20);

	//float arr3[5] = { 1.0, 2.5, 3.0, 5.0, 6.0 };
	//float arr4[10] = { 0.0 };
	//memcpy(arr4, arr3, 20);

	return 0;
}