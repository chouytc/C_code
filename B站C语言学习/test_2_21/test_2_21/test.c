#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理 '\n'
//	// 
//	//清理缓冲区中的多个字符
//	int temp = 0;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//
//		i++;//调整部分
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//{
//		//	break;
//		//}
//
//		if (i == 5)
//		{
//			continue;
//		}
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//循环体内改变循环变量的例子

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//		
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//判断部分省略 - 判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}



