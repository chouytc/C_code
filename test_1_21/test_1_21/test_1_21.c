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


int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}

	return 0;
}


