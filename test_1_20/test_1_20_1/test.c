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

int main()
{
	printf("比特\n");

	return 0;
}
//int main()
//{
//
//}

//编译+链接+运行代码
//快捷键：1.ctrl+F5
//       2.fn+ctrl+f5
//       3.菜单-调试-开始执行不调试
//若是结果一闪而过，设置一下项目属性