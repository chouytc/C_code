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
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	MALE = 3,//赋初值
	FEMALE,
	SECRET
};

int main()
{
	//4. 枚举常量
	//可以一一列举的常量

	enum Sex s = MALE;

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}

