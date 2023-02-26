#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！

//shutdown -s -t 60   //设置60s后关机
//shutdown -a         //停止关机

//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system() - 执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");//system头文件 - stdlib.h
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) //头文件 - string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

#include <stdlib.h>
#include <string.h>

int main()
{
	//关机
	//C语言提供了一个函数：system() - 执行系统命令的
	
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}


	return 0;
}

//goto 语句只能在一个函数范围内跳转，不能跨函数

//void test()
//{
//flag:
//	printf("test\n");
//}
//
//int main()
//{
//	goto flag;
//
//	return 0;
//}

