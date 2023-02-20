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

int main()
{
	int num = 1;
	for (num = 1; num <= 100; num++)
	{
		if (num % 2 == 1)
		{
			printf("%d ", num);
		}
	}

	return 0;
}