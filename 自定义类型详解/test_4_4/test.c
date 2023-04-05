#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//结构体类型的定义

//学生
//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//};

//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//}s1, s2;//s1,s2是全局变量
//
//int main()
//{
//	struct Stu s3;//s3是局部变量
//
//	return 0;
//}



////匿名结构体类型
////只能使用一次
//struct
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//}s1;
//
//int main()
//{
//	return 0;
//}



//struct
//{
//	int a;
//	char b;
//	float c;
//} x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
//int mian()
//{
//	p = &x;//即使两个结构体成员变量一模一样，编译器也认为是两个不同的结构体
//
//  return 0;
//}




//错误写法
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}*linklist;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;




//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };
//
//struct score
//{
//	int n;
//	char ch;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan", 20, {100, 'q'} };
//
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//
//	return 0;
//}






