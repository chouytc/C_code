#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�ṹ�����͵Ķ���

//ѧ��
//struct Stu
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//};

//struct Stu
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//}s1, s2;//s1,s2��ȫ�ֱ���
//
//int main()
//{
//	struct Stu s3;//s3�Ǿֲ�����
//
//	return 0;
//}



////�����ṹ������
////ֻ��ʹ��һ��
//struct
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//}s1;
//
//int main()
//{
//	return 0;
//}



//struct
//{
//	int a;
//	char b;
//	float c;
//} x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
//int mian()
//{
//	p = &x;//��ʹ�����ṹ���Ա����һģһ����������Ҳ��Ϊ��������ͬ�Ľṹ��
//
//  return 0;
//}




//����д��
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}*linklist;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;




//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };
//
//struct score
//{
//	int n;
//	char ch;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan", 20, {100, 'q'} };
//
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//
//	return 0;
//}






