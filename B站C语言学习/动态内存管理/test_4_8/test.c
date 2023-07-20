#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//1. ��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//2. �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//����
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}




//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//...
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//4. ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}




//5. ��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	//...
//
//	free(p);
//	p = NULL;
//
//	free(p);//�ظ��ͷ�
//
//	return 0;
//}




//6. ��̬�����ڴ������ͷţ��ڴ�й©��
//void test()
//{
//	int* p = (int*)malloc(100);
//	//...
//
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//......
//
//	return 0;
//}


//int* test()
//{
//	//���ٵ�
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//...
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//	//�����ͷ���
//
//
//	return 0;
//}





//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	//str��ŵľ��ǣ���̬���ٵ�100�ֽڵĵ�ַ
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}



//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//str��ŵľ��ǣ���̬���ٵ�100�ֽڵĵ�ַ
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}




//int main()
//{
//	printf("hello world\n");
//	char* p = "hello world\n";
//	printf(p);
//	printf("%s", p);
//
//	return 0;
//}




