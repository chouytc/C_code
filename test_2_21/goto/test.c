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

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ���

//shutdown -s -t 60   //����60s��ػ�
//shutdown -a         //ֹͣ�ػ�

//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system() - ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");//systemͷ�ļ� - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0) //ͷ�ļ� - string.h
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
	//�ػ�
	//C�����ṩ��һ��������system() - ִ��ϵͳ�����
	
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}


	return 0;
}

//goto ���ֻ����һ��������Χ����ת�����ܿ纯��

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

