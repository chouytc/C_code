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



//数组名的理解
//指针的运算和指针类型的意义
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));//16
//	//sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//
//	printf("%d\n", sizeof(a + 0));//4
//	//a不是单独放在sizeof内部，也没有取地址，所以a就是首元素地址，a+0还是首元素的地址
//	//是地址，大小就是4/8字节
//
//	printf("%d\n", sizeof(*a));//4
//	//*a中的a是数组首元素的地址，*a就是对首元素地址的解引用，找到的就是首元素
//	//首元素的大小就是4个字节
//
//	printf("%d\n", sizeof(a + 1));//4
//	//这里的a是数组首元素的地址
//	//a+1是第二个元素的地址
//	//sizeof(a+1)就是地址的大小
//
//	printf("%d\n", sizeof(a[1]));//4
//	//计算的是第二个元素的大小
//
//	printf("%d\n", sizeof(&a));//4
//	//&a取出的是数组的地址，数组的地址，也就是个地址
//
//	printf("%d\n", sizeof(*&a));//16
//	//&a-->int(*)[4]
//	//&a拿到的是数组的地址，类型是int(*)[4]，是一个数组指针
//	//数组指针解引用找到的是数组
//	//*&a ---> a
//	//&和*抵消了
//	//*&a ---> a
//
//	printf("%d\n", sizeof(&a + 1));//4
//	//&a取出的是数组的地址
//	//&a --> int(*)[4]
//	//&a + 1 是从数组a的地址向后跳过了一个（4个整形元素）的数组大小
//
//	printf("%d\n", sizeof(&a[0]));//4
//	//&a[0]第一个元素的地址的大小
//
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	//&a[0] + 1  是第二个元素的地址
//	//&a[0] + 1 --> &a[1]
//
//	return 0;
//}




//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	//sizeof(数组名)
//
//	printf("%d\n", sizeof(arr + 0));//4
//	//arr + 0 是数组首元素的地址
//
//	printf("%d\n", sizeof(*arr));//1
//	//*arr是数组的首元素，大小是1byte
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//
//	printf("%d\n", sizeof(arr[1]));//1
//	//arr[1]是第二个元素，大小是1byte
//
//	printf("%d\n", sizeof(&arr));//4
//	//&arr 数组的地址
//
//	printf("%d\n", sizeof(&arr + 1));//4
//	//&arr + 1 还是地址
//
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//&arr[0] + 1 还是地址
//
//	return 0;
//}



//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//
//	//printf("%d\n", strlen(*arr));//--> strlen('a');-->strlen(97);//野指针
//	//printf("%d\n", strlen(arr[1]));//-->strlen('b')-->strlen(98)
//
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	return 0;
//}


//虚拟地址-->物理地址



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
//	//strlen是求字符串长度的，关注的是字符串中的\0，计算的是\0之前出现的字符的个数
//	//strlen是库函数，只针对字符串
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
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
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
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
	//a[0]是第一行这个一维数组的数组名
	//单独放在sizeof内部，a[0]表示第一行整个这个一维数组
	printf("%d\n", sizeof(a[0] + 1));//4
	//a[0]并没有单独放在sizeof内部，也没取地址，a[0]就表示首元素的地址
	//就是第一行这个一维数组的第一个元素的地址，a[0]+1就是第一行第二个首元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4
	//a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没取地址
	//a表示首元素的地址，二维数组的首元素是它的第一行，a就是第一行的地址
	//a+1就是跳过第一行，表示第二行的地址
	printf("%d\n", sizeof(*(a + 1)));//16
	//对第二行地址的解引用，拿到的是第二行
	printf("%d\n", sizeof(&a[0] + 1));//4
	//对第一行的数组名取地址，拿出的是第一行的地址
	//&a[0] + 1 是第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	//a表示首元素的地址，就是第一行的地址
	//*a就是对第一行地址的解引用，拿到的是第一行
	printf("%d\n", sizeof(a[3]));//16

	return 0;
}