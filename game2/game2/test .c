#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("**        1. play         **\n");
	printf("**                        **\n");
	printf("**        0. exit         **\n");
	printf("****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'

	//��ӡ����
	DisplayBoard(show, ROW, COL);//ֻ��ӡ9*9�ķ�Χ�����Դ���ROW��COL

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//ֻ��ӡ9*9�ķ�Χ�����Դ���ROW��COL

	//�Ų���
	FindMine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}