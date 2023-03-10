#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~ 按位（二进制位）取反
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++  先++，后使用
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++,先使用，后++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int c = a && b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else {
//	//	max = b;
//	//}
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右以此计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//
//	return 0;
//}


//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//	return 0;
//}

//函数调用操作符
//int main()
//{
//	//调用函数的时候，函数后边的（）就是函数调用操作符
//	printf("hehe\n");
//	printf("%d\n", 100);
//
//	return 0;
//}


//1. C语言提供的。不能自己创建关键字
//2. 变量名不能是关键字

//int main()
//{
//	{
//		int a = 10;//自动创建，自动销毁的 - 自动变量
//		//auto 省略掉了
//		//auto 新的C语言语法中也有其他用法 - 暂时不考虑
//	}
//
//	return 0;
//}

//int main()
//{
//	//大量，频繁使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//


//typedef 类型重命名
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static - 静态的
//1. static修饰局部变量
//2. static修饰全局变量
//3. static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern 声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//声明函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//define 是一个预处理指令
//1.define定义符号

//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//}

//2.define 定义宏
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//a在内存中要分配空间 - 4个字节
//	printf("%p\n", &a);//%p 专门用来打印地址
//
//	int* pa = &a;//pa是用来存放地址的，在C语言中叫做指针变量
//
//	// * 说明 pa是指针变量
//	// int 说明pa的对象是int类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;// * 解引用操作  *pa就是通过pa里边的地址，找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//32位平台下地址是32个bit位（即4个字节）
//64位平台下地址是64个bit位（即8个字节）
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}


//结构体可以让C语言创建新的类型出来

//创建一个学生

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);// 结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}