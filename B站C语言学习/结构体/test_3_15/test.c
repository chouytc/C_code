#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;//�ṹ���Ա����������һ���ṹ��
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//}s1, s2;//s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w', 20, 3.14}, "����", 30, "20200534" };//����
//
//	//.  ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	//struct Stu* ps = &s;
//	//printf("%c\n", (*ps).sb.c);
//	//printf("%c\n", ps->sb.c);
//
//	return 0;
//}



//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;//�ṹ���Ա����������һ���ṹ��
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w', 20, 3.14}, "����", 30, "20200534" };//����
//	//дһ��������ӡs������
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}