#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main()
{
	int n = 9;//4byte

	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	return 0;
}


//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//1.011 * 2 ^ 2
//	//s = 0 M = 1.011 E = 2
//	//s=0 M=011 E=127 
//	// 
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 B0 00 00
//
//	return 0;
//}