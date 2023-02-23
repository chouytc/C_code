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

//1. 计算 n的阶乘。
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

//2. 计算 1!+2!+3!+……+10!
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

//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序数组中，查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}

//4. 编写代码，演示多个字符从两端移动，向中间汇聚。

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
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。

//#include <string.h>//strlen   strcmp
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串 "123456"
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//
//		//if(password == "123456")//两个字符串比较，不能用==，应该用strcmp
//		//用 == ，实则是在比较首字符的地址
//		if (strcmp(password, "123456") == 0)//strcmp是比较每个字母ASCII码值的大小
//		{
//			printf("密码正确！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("连续3次密码错误，退出程序!");
//	}
//
//	return 0;
//}


//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//	a.猜对了，就恭喜你，游戏结束
//	b.猜错了，会告诉猜大了，还是猜小了，继续猜，知道猜对
//3.游戏一直玩，除非退出游戏

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
	//猜数字游戏实现
	//1. 生成随机数
	//rand函数返回了一个0-32367之间的数字
	//时间 - 时间戳


	int ret = rand() % 100 + 1;//%100 的余数是0-99，然后+1，范围就是1-100
	//printf("%d\n", ret);

	//2. 猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}