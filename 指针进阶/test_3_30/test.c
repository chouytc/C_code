#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);//20
//
//	char ch = 'w';
//	char* pc = &ch;
//
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	int(*pf)(int, int) = Add;
//
//	//int sum = (*pf)(2, 3);
//	int sum = pf(2, 3);
//	//int sum = Add(2, 3);
//
//	printf("%d\n", sum);
//
//	return 0;
//}



//�����������
//ָ��������ָ�����͵�����
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));//16
//	//sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//
//	printf("%d\n", sizeof(a + 0));//4
//	//a���ǵ�������sizeof�ڲ���Ҳû��ȡ��ַ������a������Ԫ�ص�ַ��a+0������Ԫ�صĵ�ַ
//	//�ǵ�ַ����С����4/8�ֽ�
//
//	printf("%d\n", sizeof(*a));//4
//	//*a�е�a��������Ԫ�صĵ�ַ��*a���Ƕ���Ԫ�ص�ַ�Ľ����ã��ҵ��ľ�����Ԫ��
//	//��Ԫ�صĴ�С����4���ֽ�
//
//	printf("%d\n", sizeof(a + 1));//4
//	//�����a��������Ԫ�صĵ�ַ
//	//a+1�ǵڶ���Ԫ�صĵ�ַ
//	//sizeof(a+1)���ǵ�ַ�Ĵ�С
//
//	printf("%d\n", sizeof(a[1]));//4
//	//������ǵڶ���Ԫ�صĴ�С
//
//	printf("%d\n", sizeof(&a));//4
//	//&aȡ����������ĵ�ַ������ĵ�ַ��Ҳ���Ǹ���ַ
//
//	printf("%d\n", sizeof(*&a));//16
//	//&a-->int(*)[4]
//	//&a�õ���������ĵ�ַ��������int(*)[4]����һ������ָ��
//	//����ָ��������ҵ���������
//	//*&a ---> a
//	//&��*������
//	//*&a ---> a
//
//	printf("%d\n", sizeof(&a + 1));//4
//	//&aȡ����������ĵ�ַ
//	//&a --> int(*)[4]
//	//&a + 1 �Ǵ�����a�ĵ�ַ���������һ����4������Ԫ�أ��������С
//
//	printf("%d\n", sizeof(&a[0]));//4
//	//&a[0]��һ��Ԫ�صĵ�ַ�Ĵ�С
//
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	//&a[0] + 1  �ǵڶ���Ԫ�صĵ�ַ
//	//&a[0] + 1 --> &a[1]
//
//	return 0;
//}




//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	//sizeof(������)
//
//	printf("%d\n", sizeof(arr + 0));//4
//	//arr + 0 ��������Ԫ�صĵ�ַ
//
//	printf("%d\n", sizeof(*arr));//1
//	//*arr���������Ԫ�أ���С��1byte
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//
//	printf("%d\n", sizeof(arr[1]));//1
//	//arr[1]�ǵڶ���Ԫ�أ���С��1byte
//
//	printf("%d\n", sizeof(&arr));//4
//	//&arr ����ĵ�ַ
//
//	printf("%d\n", sizeof(&arr + 1));//4
//	//&arr + 1 ���ǵ�ַ
//
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//&arr[0] + 1 ���ǵ�ַ
//
//	return 0;
//}



//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//
//	//printf("%d\n", strlen(*arr));//--> strlen('a');-->strlen(97);//Ұָ��
//	//printf("%d\n", strlen(arr[1]));//-->strlen('b')-->strlen(98)
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	return 0;
//}


//�����ַ-->�����ַ



//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	//printf("%d\n", sizeof(arr));//7
//	////a ,b, c, d, e, f, \0
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//
//	//strlen�����ַ������ȵģ���ע�����ַ����е�\0���������\0֮ǰ���ֵ��ַ��ĸ���
//	//strlen�ǿ⺯����ֻ����ַ���
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p + 1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}




int main()
{
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	//a[0]�ǵ�һ�����һά�����������
	//��������sizeof�ڲ���a[0]��ʾ��һ���������һά����
	printf("%d\n", sizeof(a[0] + 1));//4
	//a[0]��û�е�������sizeof�ڲ���Ҳûȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ
	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��a[0]+1���ǵ�һ�еڶ�����Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4
	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ
	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16
	//�Եڶ��е�ַ�Ľ����ã��õ����ǵڶ���
	printf("%d\n", sizeof(&a[0] + 1));//4
	//�Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
	//&a[0] + 1 �ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ����ǵ�һ��
	printf("%d\n", sizeof(a[3]));//16

	return 0;
}