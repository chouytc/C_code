#define _CRT_SECURE_NO_WARNINGS 1

//写代码
//1. 写出主函数（main函数）
//100~500行代码
//代码是怎么运行的呢？- C语言是从主函数开始运行的
//所以C语言代码中得有main函数 - 程序的入口
//main函数有且只有一个

//写个代码，在屏幕上打印：比特
//printf - 库函数 屏幕上打印信息的
//printf 的使用，也得“打招呼”（引用头文件 stdio.h）


#include <stdio.h>

//int main()
//{
//	printf("比特\n");
//
//	return 0;
//}
//int main()
//{
//
//}

//编译+链接+运行代码
//快捷键：1.ctrl+F5
//       2.fn+ctrl+f5
//       3.菜单-调试-开始执行不调试
//若是结果一闪而过，设置一下项目属性

//数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题！
//购物商城 - 上架商品，价格 - 15.6元 - 小数 1.56*10^1
// 年龄 - 50
//C语言 - 浮点数
//      - 整形


//a
//'a' -  字符a

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 20;
//	//短整型(int 可省略)
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	//printf("hehe\n");
//	//printf("比特\n");
//	//printf("%d\n", 100);//打印一个整数
//	//siezof - 关键字 - 操作符 - 计算类型或者变量的大小
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//
//}

//int main()
//{
//	//创建的一个变量
//	//类型 变量的名字 = 0；//推荐
//	//类型 变量的名字；//不推荐
//
//	int age = 20;
//	double weight = 52.3;
//
//	age = age + 1;
//	weight = weight + 8;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//%d - 整形
//%f - float
//%lf - double

//全局变量（大括号外都是全局变量）
//当局部变量和全局变量名字冲突的情况下，局部优先
////不建议把全局变量和局部变量的名字写成一样的
//int a = 100;
//int main()
//{
//	//局部变量（大括号内都是局部变量）
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//写一个代码求两个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);

	return 0;
}