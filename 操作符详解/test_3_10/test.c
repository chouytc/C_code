#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	printf("%d\n", arr[4]);//[] - �±����ò�����
//	//[] �Ĳ�������2����arr , 4
//	//3 + 5;
//
//	return 0;
//}


////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{ }
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int ret = Add(a, b);//() - �������ò�����
//	test();
//
//	return 0;
//}


//�ṹ��Ա���ʲ�����
// .
// ->


//�ṹ��
//int float char short
//double long
//�飺��������ţ�����
//�ˣ����֣����䣬�Ա�

//struct Book
//{
//	//�ṹ���Ա(����)
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//int num = 10;
//	//�ṹ�������.��Ա��
//	struct Book b = { "C����", "C20230310", 55 };
//	struct Book* pb = &b;
//
//	//�ṹ��ָ��->��Ա��
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);
//	printf("�۸�%d\n", pb->price);
//
//	//printf("������%s\n", b.name);
//	//printf("��ţ�%s\n", b.id);
//	//printf("�۸�%d\n", b.price);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	//-126
//	//����a��b����char���ͣ���û�дﵽһ��int�Ĵ�С
//	//����ͻᷢ����������
//	
//
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//4 gcc ��Ϊ4
	return 0;
}