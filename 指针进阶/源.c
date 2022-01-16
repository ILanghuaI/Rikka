#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//指针的概念
//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//2.指针的大小是固定的4/8个字节（32位平台/64位平台）。
//3.指针是有类型的，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限。
//4.指针的运算
//

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

/*int main()
{
	char* p = "abcdef";
	*p = 'W';
	printf("%s\n", p);
}*///Sementation fault - 段错误

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//*p = 'W';
//	printf("%s\n", p);
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//两个相同值的地址在不同空间上的时候两个值就是不一样的
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//p1和p2都指向了同一个值的地址位置
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//}

//指针数组 是数组,用来存放指针的。
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p\n", arr[i]);
//		printf("%p\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	printf("%d", *parr[1]);
//	return 0;
//}

//int main()
//{
//	//int* p = NULL;//p是整形指针 - 指向整形的指针  
//	//char* pc = NULL;//pc是字符指针 - 指向字符的指针
//	////数组指针 - 指向数组的指针
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char(*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d", *(*pa + i));//*pa ==arr ，首元素地址，解引用加i等于首元素+i
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("d", (*pa)[i]);
//	}*/
//	return 0;
//}

//print1里面的参数是数组的形式
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x;i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("%d\n");
//	}
//}
////print2里面的参数是指针的形式
//void print2(int* p[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//
//			printf("%d ", *(*(p + i) + j));//也可以写成printf("%d ",(*(p+i))[j]);
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ",*( p[i]+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);//arr - 数组名 -数组名就是首元素地址
//	//把arr想象成一维数组，把一行想象成一个元素
//	print2(arr, 3, 5);
//	return 0;
//}
////int arr[5] - arr是一个5个元素的整形数组
////int* parr1[10] - parr1是一个数组，数组有10个元素，每个元素的类型是int*.parr1是指针数组
////int (*parr2)[10] - parr2是一个指针,该指针指向了一个数组，数组有10个元素，每个元素的类型是int - parr2
////是数组指针
////int (*parr3[10])[5] - parr3是一个数组，该数组有10个元素，每个元素是
////一个数组指针，该数组指针指向的数组有5个元素，每个元素是int
//
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针 - 指向数组
//	int* p3;//整形指针 - 指向整形的指针
//	char* p4;//字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int (* pa)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//	int(*parr3[10])[5] = &arr2;//数组指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i] == *(arr+i) ==*(p+i) ==p[i]
//	}
//	return 0;
//}


//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])//行可以省略，列不能省略
////{}
//void test3(int** arr)//error 不行，数组的地址不能放到二级指针里头
//{}
//void test4(int (*arr)[5])//ok
//{}
////二维数组传参
//int main()
//{
//	int arr[3][5] = {0};
//	/*test(arr);//二维数组传参
//	test1(arr);
//	test2(arr);*/
//	//test3(arr);
//	test4(arr);
//	return 0;
//}

//
//void test1(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//}

//二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//函数指针 - 指向函数的指针
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//printf("%d\n", add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &add);
//	printf("%p\n", add);*/
//	int (*pa)(int, int) = add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hello world");
//	return 0;
//}
//(*(void (*)()0)()//把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址
//调用0地址处的该函数

//void(*signal(int, void(*)(int)))(int);
////简化
//typedef void(* pfun_t)(int);//对函数指针类型重命名的时候是pfun_t
//pfun_t signal(int, pfun_t);//signal是一个函数声明
//signal函数的参数有2个，第一个是int。第二个是函数指针，该函数指针
//指向的函数参数是int，返回类型是void，signal函数的返回类型也是一个
//指针：该函数指针指向的函数的参数是int，返回类型是void

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//printf("%d\n", add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &add);
//	printf("%p\n", add);*/
//	int (*pa)(int, int) = add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));//调用的时候可以解引用也可以不解//函数名本来就是地址
//	return 0;
//}

//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = add;//sub/mul/div
//	int (*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//
//}

//char* my_strcpy(char* dest,const char* src)
//{}
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pff[4])(char*, const char*) = { my_strcpy };
//	return 0;
//}


void clean_ch()
{
	while (getchar() != '\n');
}
void menu()
{
	printf("************************\n");
	printf("**1. add        2. sub**\n");
	printf("**3. mul        4. divv**\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int divv(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	while (input)
//	{
//		system("cls");
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		clean_ch();
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n",add(x,y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，没有这个选项\n");
//			break;
//		}
//		system("pause");
//	}
//}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	//pff函数指针数组 - 转移表
//	int (*pff[])(int, int) = { 0,add,sub, mul,div };
//	while (input)
//	{
//		system("cls");
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		clean_ch();
//		if (input >= 1 && input <= sizeof(pff)/sizeof(pff[0])-1)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			int ret = pff[input](x, y);
//			printf("答案是：%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		system("pause");
//	}
//}
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	clean_ch();
	printf("答案是 = %d\n", pf(x, y));
}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	while (input)
//	{
//		system("cls");
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		clean_ch();
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，没有这个选项\n");
//			break;
//		}
//		system("pause");
//	}
//}

//int main()
//{
//	int arr[] = { 0 };
//	int (*p)[10] = &arr;
//
//	int(*pf)(int, int);//函数指针
//	int (*pf[4])(int, int);//pf是一个数组 - 函数指针的数组
//	int (*(*pff)[4])(int,int) = &pf;
//	//pff是一个数组指针，指针指向的数组有4个元素
//	//指向数组的每个元素的类型是hi一个函数指针
//	return 0;
//}

//回调函数
//回调函数就是一个通过函数指针调用的函数，如果你把函数的指针（地址）作为
//参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这个
//是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或条
//件发生时由另外的一方调用的，用于对该事件或条件进行响应。

//void print(char* str)
//{
//	printf("hehe");
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//void bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一次冒泡排序
//		int j = 0;
//		for (j = 0; j < sz -1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

struct stu
{
	char name[20];
	int age;
};

//qsort - 可以排序任意类型的数据
//int main()
//{
//	//冒泡排序函数
//	//冒泡排序函数只能排序整形数组
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, sz);
//	return 0;
//}

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubblesort(void* base,int sz,int width,int (*cmp)(void*e1,void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数	
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值的
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	//比较两个整形值的
	return ( (int) * (float*)e1 - *(float*)e2);
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test2()
{
	float f[] = { 9.0, 8.0,7.0,6.0,5.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}
cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较，应该用strcmp函数
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]),cmp_stu_by_age );
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：是函数指针，比较两个元素所用函数的地址-这个函数
	//			  要我们自己实现：他的两个参数是：待比较的两个元素的地址
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubblesort的程序员一定知道自己排序的是什么数据
	//应该知道如何比较待排序数组中的元素
	bubblesort(arr,sz,sizeof(arr[0]), cmp_int);
}
void test5()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubblesort(s, sz, sizeof(s[0]),cmp_stu_by_name );
}
int main()
{
	//struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	//float f[] = {9.0, 8.0,7.0,6.0,5.0};
	//bubblesort(arr, sz);
	test1();
	test2();
	test3();
	test4();
	return 0;
}
//void* 类型的指针 可以接收任意类型的地址
//void* 类型的指针 不能进行解引用操作
//qsort - 库函数 - 排序
//quick sort -