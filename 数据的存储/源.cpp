#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	float f = 10.0;
//
//	short b =
//	return 0;
//}

//整数
// 有符号数：
//1正数，原码反码补码都相同
//2负数，原码反码补码不同，要进行计算
//无符号数：
//原码反码补码相同

//大小端：
//大端存储模式：数据的地位保存在内存的高地址中，而数据的高位，保存在内存的低地址中
//小端存储模式，数据的地位保存在内存的低地址中，而数据的高位，保存在内存的高地址中

//int check()
//{
//	int a = 1;
//	return *(char*)&a;
//	//返回1，小端
//	
//	//返回2，大端
//}
//
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000-补码
//	//11111111111111111111111110000000无符号数，等于原码
//	printf("%u\n", a);
//	return 0;
//}
//
//char类型有符号数范围-128->127，无符号数范围0->255

//int main()
//{
//	unsigned int i;
//	for (i = 0; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}//死循环，因为是无符号数，恒大于等于零
//	return 0;
//}

//0 00000000 01100000000000000000000
//+/- 0.011 * 2……-126
//全0情况
//0 11111111 01100000000000000000000
//E+127 - 255
//E =128
//1.xxx * 2^128
//全1情况，表示正负无穷大的数字