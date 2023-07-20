#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct S1 s1;
//	//struct S2 s2;
//	//struct S3 s3;
//
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	//printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//
//	//printf("%d\n", offsetof(struct S1, c1));
//	//printf("%d\n", offsetof(struct S1, i));
//	//printf("%d\n", offsetof(struct S1, c2));
//
//	//printf("%d\n", offsetof(struct S2, c1));
//	//printf("%d\n", offsetof(struct S2, c2));
//	//printf("%d\n", offsetof(struct S2, i));
//
//	//printf("%d\n", offsetof(struct S3, d));
//	//printf("%d\n", offsetof(struct S3, c));
//	//printf("%d\n", offsetof(struct S3, i));
//
//	printf("%d\n", offsetof(struct S4, c1));
//	printf("%d\n", offsetof(struct S4, s3));
//	printf("%d\n", offsetof(struct S4, d));
//
//	return 0;
//}


//#pragma once
//头文件中使用，功能是：防止头文件被多次引用

//#pragma pack(4)
//struct S
//{
//	int i;//0~3
//	//4
//	double d;//4~11
//};
//#pragma pack()
//
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12
//	printf("%d\n", sizeof(struct S1));//6
//
//	return 0;
//}



