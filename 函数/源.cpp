#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include "add.h"


//函数定义如果放在主函数后面，如果要调用需要先声明
//函数声明
//int Add(int x,int y);//x y可以省略
//告诉编译器有一个函数叫什么，参数是什么，返回类型是什么，但是具体是不是存在，无关紧要。
//函数的声明一般出现在函数的使用之前，要满足先声明后使用。
//函数的声明一般要放在头文件中的。
//函数的定义是指函数的具体实现，交代函数的功能实现。

//void Add(int* p)
//{
//	(*p)++;//加加的优先级比较高，所以要给*p加个括号。
//}

int get_max(int x, int y)
{
	int z = 0;
	z = x > y ? x : y;
	return z;
}
void get_change(int x, int y)//交换的是形参—形式上的参数，需要用的时候才会临时分配内存，因为ab和xy的地址不一样，所以xy交换了和ab没有关系。
//出了函数就自动销毁了
{
	int z = 0;
	z = y;
	y = x;
	x = z;
}
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
void get_change2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int is_leap_year(int x)//函数里不要输出printf，要简单单一，这样才能具有可复用性。
{
	if (x % 4 == 0 && x % 100 != 0 || (x % 400 == 0))
	{
		printf("%d是闰年", x);
		return 1;
	}
	else
	{
		printf("%d不是闰年", x);
		return 0;
	}
}

int get_su(int x)//判断素数
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	if (i > sqrt(x))
		return 1;
}

int binary_search(int arr[], int k,int sz)//本质上，arr是一个指针，不是数组，所以求出来的值是1
{
	//算法的实现
	int left = 0;
	int right = sz ;
	while (left <= right)//一定要小于等于
	{
		int mid = (left + right) / 2;//循环变量一定要在循环里头
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//嵌套调用和链式访问
//嵌套调用：
//函数和函数之间是可以有机的组合的
void new_line()
{
	printf("hehe\n");
 }
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}

//链式访问：
//把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	//int len = 0;
//	////1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	////2
//	//printf("%d\n", strlen("abc"));
//	//printf("%d\n", printf("%d", printf("%d", 43)));//printf的返回值是int类型，是打印在频幕上的字符总数，先打印43，43是两个字符，所以返回值是2
//	////然后打印2，字符数是1，所以打印1
//	//printf("%d\n", printf("%d", 43));
//	//printf("%d\n", 43);
//	//printf("%d\n", Add(3, 3));
//	//return 0;
//}

//int main()
//{
//	/*char arr1[] = "bit";
//	char arr2[] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);*///bit/0####### /0是一串字符的结束标志。
//	//strcpy - #string copy  字符串拷贝
//	//strlen - string length -字符串长度有关。
//	/*char arr[] = "hello world!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);*/
//	//自定义函数
//	//ret_type fun_name(para1,*)//返回类型 函数名 函数参数
//	//{
//	//		statement//语句项，函数体，交代的是函数的实现。
//	//}
//	//int a = 0;
//	//int b = 0;
//	//printf("请输入a的值：");
//	//scanf("%d", &a);
//	//printf("请输入b的值：");
//	//scanf("%d", &b);
//	//get_change2(&a, &b);//实参：真实传给函数的参数，必须有确定的值。
//	////调用get_change2函数
//	////有传值调用和传址调用
//	////传值调用：
//	////函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参。
//	//// 传址调用：
//	////传址调用是吧函数外部创建的地址传递给函数参数的一种调用函数的方法。
//	////这种传参方法可以让函数和函数外边的变量建立真正的联系，也就是函数内部可以直接操作函数外部的变量。
//	//printf("a = %d,b = %d\n",a,b);
//	//int i = 0;
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int k = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	///*for (i = 100,; i <= 200; i++)
//	//{
//	//	if (get_su(i) == 1)
//	//		printf("%d\n", i);
//	//}*/
//	//printf("请输入想要判断的值：");
//	//scanf("%d", &k);
//	////is_leap_year(i);
//	//int ret = binary_search(arr,k,sz);//arr传的只是首个元素的地址
//	//if (ret == -1)
//	//{
//	//	printf("找不到指定的数字");
//	//}
//	//else
//	//{
//	//	printf("找到了，下标是：%d\n", ret);
//	//}
//	return 0;
//} 



//函数递归
//程序调用自身的编程技巧称为递归（recursion）。递归作为一种算法在程序设计语言中广泛应用。一个过程或者
//函数在其定义或说明中有直接或者间接调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题
//相似的规模较小的问题来求解，递归策略只需要少量的程序就可以描述出解题过程所需要的多次重复计算，大大减少了程序的
//代码量。递归的主要思考方式在于：把大事化小。
//递归的两个必要条件：
//1
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//2
//每次递归调用之后越来越接近这个限制条件。 

//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//死循环打印hehe
//栈溢出，递归常见的错误Stack overflow
//申请内存的时候内存分为三个区域，一个是栈区，一个是堆区，一个是静态区
//栈区：局部变量，函数形参
//堆区：动态开辟的内存，malloc，calloc
//静态区：全局变量，static修饰的变量。
//每次调用main函数，就要在栈区分配一次空间，如果死循环调用空间，栈空间就会被耗完，一旦耗完，就会提示stack overflow，栈溢出了。
//如果递归无休止的调用下去，就会出现这个错误。
//有个网站也叫StackOverflow，相当于程序员的知乎，全球性的

//递归在书写的时候要存在限制条件，满足这个条件的时候递归便不再继续，
//而且每次递归调用之后越来越接近这个限制条件。

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int my_strlen(char* str)//计算字符串的长度,不通过临时变量
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else 
		return 0;
}

int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int Fac2(int n)
{
	if (n >= 1)
	{
		return n * (Fac2(n - 1));
	}
	else
		return 1;
}

int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
		return Fib(n - 1) + Fib(n - 2);
}

int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	/*unsigned int num = 0;
	scanf("%d", &num);
	print(num);*/
	/*char arr[] = "bitttt";
	int len = my_strlen(arr);
	printf("len = %d\n", len);*/
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib2(n);
	printf("%d\n", ret);
	return 0;
}
