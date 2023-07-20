#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作用域和生命周期
// 
// 作用域：
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2023;//全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	
//	{
//		int a = 10;//只在这个大括号内部可以使用
//		printf("a = %d\n", a);
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}


//声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：进入局部范围声明开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期


//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}


//常量

//#define MAX 10000
//
//int main()
//{
//	1. 字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	2. const修饰的常变量
//	const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	num = 20;
//	printf("num = %d\n", num);
//	
//	int arr[10] = { 0 };//10个元素
//
//	const int n = 10;//常变量本质上还是一个变量，只是具有常属性
//	int arr2[n] = { 0 };//n是变量的，这里是不行
//
//	3. #define 定义的标识符常量
//	MAX = 20000;//ERROR
//	int n = MAX;
//	printf("n = %d\n", n);
//
//	return 0;
//}

//性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	//4. 枚举常量
//	//可以一一列举的常量
//
//	enum Sex s = MALE;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//字符串就是一串字符 - 用双引号括起来的一串字符

//int main()
//{
//	"abcdef";
//	"hello bit";
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//printf("C:\test\test.c");
//	printf("ab\ncd");// \+n
//
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok??)");//  ??)  -->  ]  三字母词
//	////VC 6.0 打印出 are you ok]
//
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("C:\\test\\test.c\n");
//	printf("\a");
//	//printf在打印数据的时候，可以指定打印的格式
//
//
//	return 0;
//}
////printf("%d",100);
////printf("%c",'a');
////printf("%s","abc");

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是10进制的
//	////X -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 - 8进制是：101
//	//printf("%c\n", '\x30');//48 对应的字符 0
//	//printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen("c:\test\328\test.c"));// \32 被解析为一个转义字符
//
//
//	return 0;
//}

//注释：是用来解释复杂代码的
//int main()
//{
//	//int a = 10;//C++注释风格
//	/*
//	int b = 0;
//	*/ //C语言的注释风格 - 不支持嵌套注释
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特:>");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("研究生上岸。\n");
//	}
//	else {
//		printf("连工作都找不到。\n");
//	}
//
//	return 0;
//}

//比特 - 30000行代码 - 找一个不错的工作

//int main()
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("%d:写代码\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("拿个好offer\n");
//	}
//
//	return 0;
//}

//不利用函数算两数之和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//利用函数算两数之和
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	Add(num1, num2);
//	int sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//....如果用10个变量一次存储，非常不便
//
//	//数组 - 一组相同类型的元素的集合
//	//10个整形1~10存起来
//	//数组使用下标来访问的
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余默认为0
//
//	return 0;
//}

//int main()
//{
//	int a = 9 / 2;
//	float b = 9 / 2;
//	float c = 9 / 2.0;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%f\n", c);//只有操作数中有小数才能得出4.5，否则即使是%f,也只能输出4.000
//
//	int d = 9 % 2;//% - 取模（余）
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//左移操作符 -- 移动的是二进制位
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//0表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//如果a为真，执行
//	}
//	if (!a)
//	{
//		//如果a为假，执行
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}

//int main()
//{
//	//seizeof是一个操作符
//	//sizeof不是函数
//	//计算类型或变量大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

int main()
{
	//10*4=40
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的是数组总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//数组中单个元素的大小
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组个数
	printf("数组元素个数是%d\n", sz);

	return 0;
}