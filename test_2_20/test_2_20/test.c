#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 70;
//
//	//多分支
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 26) {
//		printf("青年\n");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age <= 100) {
//		printf("老年\n");
//	}
//	else {
//		printf("老不死\n");
//	}
//
//	/*if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (18 <= age < 26) {
//		printf("青年\n");
//	}*/ //错误写法
//
//
//	/*if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else {
//		printf("未成年\n");
//	}*/
//
//
//	/*if (age >= 18)
//	{
//		printf("成年\n");
//	}*/
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	for (num = 1; num <= 100; num++)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//	return 0;
//}


//1. 输入1 - 5，输出的是“weekday”;
//2. 输入6 - 7，输出“weekend”

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;

	//在while循环中，break用于永久的终止循环
	// 
	//在while循环中,continue的作用是跳过本次循环continue后面的代码
	//直接去判断部分，看是否进行下一次循环

	//while (i <= 10)
	//{
	//	if (5 == i)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//	i++;
	//}

	//while (i <= 10)
	//{
	//	if (5 == i)
	//	{
	//		break;
	//	}
	//	printf("%d ", i);
	//	i++;
	//}

//	return 0;
//}

//getchar

//EOF - end of file - 文件的结束标志

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar 就读取结束

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}

