#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 70;
//
//	//���֧
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 26) {
//		printf("����\n");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age <= 100) {
//		printf("����\n");
//	}
//	else {
//		printf("�ϲ���\n");
//	}
//
//	/*if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (18 <= age < 26) {
//		printf("����\n");
//	}*/ //����д��
//
//
//	/*if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else {
//		printf("δ����\n");
//	}*/
//
//
//	/*if (age >= 18)
//	{
//		printf("����\n");
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
//		printf("����\n");
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