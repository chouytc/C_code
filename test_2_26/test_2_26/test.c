#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//����z - ���ؽϴ�ֵ
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//�����������͵ĵط�д�ɣ�void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//��������
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - �����������α�����ֵ
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	Swap(a, b);
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//}


//Swap1�ڱ�����ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��
void Swap1(int x, int y)//��ֵ����
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}

void Swap2(int* pa, int* pb)//��ַ����
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//дһ������ - �����������α�����ֵ

	Swap1(a, b);
	printf("����ǰ��a = %d b = %d\n", a, b);
	Swap2(&a, &b);
	printf("������a = %d b = %d\n", a, b);

	return 0;
}



