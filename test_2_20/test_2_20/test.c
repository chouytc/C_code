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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	return 0;
//}


//1. ����1 - 5��������ǡ�weekday��;
//2. ����6 - 7�������weekend��

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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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

	//��whileѭ���У�break�������õ���ֹѭ��
	// 
	//��whileѭ����,continue����������������ѭ��continue����Ĵ���
	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��

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

//EOF - end of file - �ļ��Ľ�����־

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar �Ͷ�ȡ����

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}

