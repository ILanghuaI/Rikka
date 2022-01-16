#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//算术操作符
//int main()
//{
//	int a = 5 / 2;//得到商
//	int b = 5 % 2;//得到余数
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = -1;
//	int b = 0;
//	//>> -右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//算术移位
//	//右边丢弃，左边补原符号位
//	//逻辑右移
//	//右边丢弃，左边补0
//	b = a >> 1;                                            
//	printf("%d\n", b);//算术移位
//	//整数的二进制表示有：原码，反码，补码
//	//存储到内存中的是补码
//	// 10000000000000000000000000000001 - 原码
//	// 11111111111111111111111111111110 - 反码
//	// 11111111111111111111111111111111 - 补码
//	//
//	return 0;
//}

//按位操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//011
//	//101
//	//^ = 110同0异1
//	printf("%d\n", c);
//	return 0;
//}
//交换两个变量，不能使用第三个变量
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d,%d", a, b);*/
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d", a, b); 
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//单目双目多目操作符
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof计算的变量所占的内存空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//整形4个字节
//	printf("%d\n", sizeof(c));//一个字符1个字节
//	printf("%d\n", sizeof(p));//64位指针变量8个字节
//	printf("%d\n", sizeof(arr));//10个元素的数组一个整型是4个字节一共是40个字节
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//逻辑操作符
//int main()
//{
//	/*int a = 0;
//	int b = 5;
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);
//	printf("%d\n", d);*/
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//逻辑与操作符特点，左边只要为假，右边的数都直接不算了。
//	i = a++ || ++b || d++;//逻辑或操作符，走遍只要为真，右边的数也直接不算了
//	printf("i = %d\na = %d\nb = %d\nc = %d\nd = %d\n",i, a, b, c, d);
//	return 0;
//}

//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//创建一个结构体类型—struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
	struct Stu s1 = { "张三",20,"2019010305" };
	struct Stu* ps = &s1;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//结构体变量，成员名
	return 0;
}