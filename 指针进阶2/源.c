#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int *)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//0x4 地址 + 了1， 向后偏移了一个字节
//	printf("%x,%x", ptr1[-1], *ptr2);//0x02 00 00 00 
//}

int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
}