#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

// while for do while

//1. ���� n�Ľ׳ˡ�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0! = 1\n");
//	}
//	else
//	{
//		for (i = n; i >= 1; i--)
//		{
//			sum = sum * i;
//		}
//		printf("%d! = %d", n, sum);
//	}
//
//	return 0;
//}

//2. ���� 1!+2!+3!+����+10!
//int main()
//{
//	int i = 0;
//	int add = 0;
//	int sum = 1;
//		for (i = 1; i <= 10; i++)
//		{
//			sum = sum * i;
//			add = sum + add;
//		}
//
//	printf("%d\n", add);
//
//	return 0;
//}

//3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������У�����k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}

//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�

//welcome to bit!!!!!!
//####################

//w##################!
//we################!!
//...
//welcome to bit!!!!!!


//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����

//#include <string.h>//strlen   strcmp
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ��� "123456"
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//
//		//if(password == "123456")//�����ַ����Ƚϣ�������==��Ӧ����strcmp
//		//�� == ��ʵ�����ڱȽ����ַ��ĵ�ַ
//		if (strcmp(password, "123456") == 0)//strcmp�ǱȽ�ÿ����ĸASCII��ֵ�Ĵ�С
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("���������������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����3����������˳�����!");
//	}
//
//	return 0;
//}


//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//	a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//	b.�´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�֪���¶�
//3.��Ϸһֱ�棬�����˳���Ϸ

#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**********************************\n");
	printf("***********   1.play    **********\n");
	printf("***********   0.exit    **********\n");
}

void game()
{
	//��������Ϸʵ��
	//1. ���������
	//rand����������һ��0-32367֮�������
	//ʱ�� - ʱ���


	int ret = rand() % 100 + 1;//%100 ��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d\n", ret);

	//2. ������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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