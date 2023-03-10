#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	printf("%d\n", arr[4]);//[] - 下标引用操作符
//	//[] 的操作数是2个：arr , 4
//	//3 + 5;
//
//	return 0;
//}


////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{ }
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b);//() - 函数调用操作符
//	test();
//
//	return 0;
//}


//结构成员访问操作符
// .
// ->


//结构体
//int float char short
//double long
//书：书名，书号，定价
//人：名字，年龄，性别

//struct Book
//{
//	//结构体成员(变量)
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//int num = 10;
//	//结构体变量名.成员名
//	struct Book b = { "C语言", "C20230310", 55 };
//	struct Book* pb = &b;
//
//	//结构体指针->成员名
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("价格：%d\n", pb->price);
//
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);
//	//printf("价格：%d\n", b.price);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	//发现a和b都是char类型，都没有达到一个int的大小
//	//这里就会发生整形提升
//	
//
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//4 gcc 中为4
	return 0;
}