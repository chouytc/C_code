#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~ ��λ��������λ��ȡ��
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++  ��++����ʹ��
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++,��ʹ�ã���++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int c = a && b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else {
//	//	max = b;
//	//}
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ���Ǵ��������Դ˼����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//
//	return 0;
//}


//�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//	return 0;
//}

//�������ò�����
//int main()
//{
//	//���ú�����ʱ�򣬺�����ߵģ������Ǻ������ò�����
//	printf("hehe\n");
//	printf("%d\n", 100);
//
//	return 0;
//}


//1. C�����ṩ�ġ������Լ������ؼ���
//2. �����������ǹؼ���

//int main()
//{
//	{
//		int a = 10;//�Զ��������Զ����ٵ� - �Զ�����
//		//auto ʡ�Ե���
//		//auto �µ�C�����﷨��Ҳ�������÷� - ��ʱ������
//	}
//
//	return 0;
//}

//int main()
//{
//	//������Ƶ��ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100;//����num��ֵ����ڼĴ�����
//
//	return 0;
//


//typedef ����������
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static - ��̬��
//1. static���ξֲ�����
//2. static����ȫ�ֱ���
//3. static���κ���

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern �����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//��������
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}