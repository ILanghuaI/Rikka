#define _CRT_SECURE_NO_WARNINGS 1//#define 定义的标识符常量。可以定义标识符和常量
//#define MAX 10
//#define 定义标识符常亮
//#define 可以定义宏-带参数
//宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
#include <stdio.h>//调用输入输出
#include <string.h>//定义了一个变量类型、一个宏和各种操作字符数组的函数。(字符串处理)


//void ttst()
//{
//	extern int g_val;//extern用来声明外部函数，声明过后就可以使用了
//	printf("g_val = %d\n", g_val);
//}
//void test()//讲static
//{
//	static int a = 1;//a  是一个静态的局部变量。没加static，进入这个局部范围之后变量创建，出了这个范围（生命周期），变量销毁了。
//	//static的作用，用来修饰一个局部变量，局部变量的生命周期变长了，出了作用域也不再销毁了。
//	//static 修饰全局变量：改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用。出了源文件就不能使用了。
//	//static修饰函数（同修饰变量一样，也是改变了函数的作用域）——不准确，正确说法，改变了函数的链接属性。
//	//从外部链接属性变成了内部链接属性。
//	a++;
//	printf("a = %d\n", a);
//
//}
//int Max(int x, int y)
////{
// //register
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET//枚举常量（注意逗号，分号）
//};
//int Add(int x,int y)//自定义函数
//{
//	int z = x + y;
//	return z;
//}
//c语言中我们表示真假，0就是假，所有非0都是真。假变真默认1.
//int main()
//{
//	//int arr[10] = { 0 };//[]下标引用操作符——（）函数调用操作符
//	//int a = 10;
//	//int b = 20;
//	//int max = 0;
//	//max = (a > b ? a : b);//exp1 ?exp2:exp3;条件操作符（三目操作符）。//逗号表达式exp1,exp2,exp3.等
//	//printf("max = %d\n", max);
//
//	/*int a = (int)3.14;
//	printf("%d\n", a);*/
//	//int a = 10;
//	//int b = ++a;
//	//int c = a++;	
//	//printf("a= %d b=%d c=%d\n", a, b,c);//后置++.先使用再加，前置++先加再使用。
//
//	//int a = 1;//4个字节，32个bit位。
//	//int b = ~a;//b 是有符号的整形，二进制最高位是符号位，为1则负，0则正。负数我们说是内存中的补码
//	////~ - 按（2进制）取反
//	////00000000000000000000000000000000
//	////即11111111111111111111111111111111
//	// -1——整型 -32
//	// 1 ——整形 -32
//	//// 原码符号位不变，其他位按位取反得到反码。
//	//// 反码+1得到补码。
//	//// 补码-1得到反码。
//	//// 反码按位取反得到原码。
//	////源码、反码、补码。
//	////负数在内存中存储的时候，存储的是二进制的补码
//	只要是整数，内存中储存的都是二进制的补码。
//	正数—原码，反码，补码 相同
//  负数： 原码——>  反码——>补码
// 直接按照正负——>源码的符号位不变——>反码+1
// 写出的二进制序列     其他位按位取反
// 正数原码反码补码相同，负数存的一定是补码。
//	//printf("%d\n", b); //使用的，打印的都是这个数的原码。存储完得到111**111补码-1得到1111**110反码再除了符号位按位取反得到1000**001最高位是1为负，后面为1所以得到-1
//	/*int num1 = 20;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1,num2);
//	printf("max = %d\n", max);*/
//
//	/*if (num1 > num2)
//		printf("较大的值是:%d\n", num1);
//	else if(num1 < num2)
//		printf("较大的值是:%d\n", num2);
//	else 
//		printf("两个值相等");*///比较函数。
//
//	/*int arr[10] = { 0 };*/
//	//int sz = 0;
//	//printf("%d\n", sizeof(arr[0]));//单个元素的大小。
//	//sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数：个数=	数组总大小/每个元素的大小。
//	//printf("%d\n", sz);
//	
//	//	int a = 10;
//	//int b = 20;
//	//a + b;//+左边一个操作符右边一个操作数，所以+就是一个双目操作符。单目操作符有！（逻辑反操作）-（负值）+（正值）&（取地址）sizeof(操作数（变量/类型）的类型长度（所占空间的大小，单位是字节））~(对一个数的二进制按位取反）==（前置、后置--）
//	//++（前置、后置++）*间接访问操作符（解引用操作符）
//	/*int a = 5;
//	int b = a << 2;//移动（2位）操作符《左移，》右移（整型一个占4个字节，32bit位。//	&与,|或,^异或，二进制里位操作，异或的计算规律，对应的二进制相同为0，相异为1.//=赋值==判断相等//逻辑与&&，逻辑或||
//	//a = a+10 等价于a+= ;a = a -10 等价于a-=；以此类推
//	printf("%d\n", b);
//*/
//	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数字的数组。
//	int i = 0;
//		while (i < 10)
//		{
//			printf("%d\n", arr[i]);//下标的方式访问数组，数组的下标从0开始，每次+1.
//			i++;
//		}*/
//
//	//int num1 = 10;
//	//int num2 = 20;
//	//int sum = 0;
//	//int a = 100;
//	//int b = 200;
//	//sum = Add(num1, num2);//调用函数
//	//sum = Add(a, b);
//	//printf("%d\n",sum);
//
//	/*int line = 0;
//	printf("敲代码。\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码，%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("成功");*/
//
//	/*int input = 0;
//	printf("学习？(1或者0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("学！");
//	else
//		printf("回家\n");*///分支语句
//
//	//转义字符,如\n换行\?书写多个问号使用，防止被解析成3字母词\'用于表示字符常量\"用于表示一个字符串内部的双引号\\用于表示一个反斜杠， 防止它被解释为一个转义序列符
//	//\a警告字符,蜂鸣\b退格符\f进纸符\r回车\t水平制表符\v垂直制表符\ddd表示1-3个八进制数字
//	//printf("%d\n", strlen("c:\test\32\test.c"));// /t表示一个转义字符算作一个/32--32是两个8进制数字//32作为8进制代表的那个十进制数字。作为ASCII码值，对应的字符。
//	//printf("%c\n", '\90');
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c','\0' };
//	//printf("%d\n", strlen(arr1));//strlen _ string length_计算字符串长度的.
//	//printf("%d\n", strlen(arr2));
//	///数据在计算机上储存的时候，储存的是二进制
//	// #aV&
//	// a - 97
//	//char arr1[]="abc";//数组
//	// "abc"——'a''b''c''\0'——'\0'字符串的结束标志
//	// char arr2[] = { 'a','b','c','\0'};
//	////'\0'
//	// //'a' - 97
//	// //'a''b''c'
//	// printf("%s\n",arr1);
//	// printf("%s\n",arr2);
//	//enum Sex s = FEMALE;
//	//printf("%d\n", MALE);
//	//printf("%d\n", FEMALE);
//	//printf("%d\n", SECRET);
//	//printf("%d\n", s);
//	//const int n = 4;//n是变量，但是有常属性，所以我们说n是常变量，具有常量属性，但是本质还是变量。
//	//int arr[MAX] = { 0 };
//	//printf("%d\n", MAX);
//	//const -常属性(修饰变量）
//	//int num1 = 0;
//	//int num2 = 0;
//	//int sum = 0;
//	//scanf("%d%d", &num1, &num2);scanf输入printf输出
//	//sum = num1 + num2;
//	//printf("sum = %d\n", sum);
//	//char ch = 'A';字符
//	//int age = 10;整形
//	//float f = 5.0;浮点型
//	//double d = 3.14;双浮点
//	//printf("hehe\n",ch);
//	//printf("%d\n", age);
//	//printf("%c\n", ch);
//	//printf("%f\n", f);
//	//printf("%lf\n", d);
//	//printf("%d\n",sizeof(float));
//	return 0;
//}
//枚举常量。可以一一列举如，性别：男，女；三原色：红，黄，蓝；星期等。
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	////函数
//	//int max = Max(a, b);
//	//printf("max = %d\n", max);
//	////宏的方式
//	//max = MAX(a, b);
//	//printf("max = %d\n", max);
//
//	//register int a = 10;//建议把a定义成寄存器变量，只是建议，编译器会判断是否将变量a放到寄存器里面。register就是cpu和内存中间的一个临时存放数据的块，重复使用一个变量的时候就可以不用每次从内存申请。
//	// 而寄存器的数据又来源于内存，于是 CPU <-- 寄存器 <-- 内存，这就是它们之间的信息交换。如果频繁地操作内存中同一地址上的数据会影响速度，于是就在寄存器和内存之间设置一个缓存。
//	// 把使用频繁的数据暂时保存到缓存，如果寄存器需要读取内存中同一地址上的数据，就不用大老远地再去访问内存，直接从缓存中读取即可。	
//	//int a = 10;
//	//a = -2;
//	//int定义的变量是有符号的
//	//signed int;隐藏了signed
//	//如果想要定义一个无符号数，在int前面加个unsigned，如unsigned int num = 0;
//	//struct - 结构体关键字。
//	//int float;//err
//	//typeof - 类型定义 -类型重定义
//	//typedef unsigned int u_int;//unsigned int 和u_int 一样。把unsigned int 这个词换个名字重新定义，意思是一样的。
//	//u_int num2 = 20;
//	//unsigned int num1 = 20;
//	//printf("%d\n", num1);
//	//printf("%d\n", num2);
//	//static是用来修饰变量和函数的
//	/*int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	ttst();*/
//	return 0;
//}
//int  main()//指针
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%p\n", pc);
//	printf("%d\n", sizeof(pc));
//	//int a = 10;
//	////&a;//取地址.
//	//int* p = &a;//取地址,p现在是一种指针变量，他的类型是int*
//	////有一种变量就是专门用来存放地址的——指针变量
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	//printf("%d\n", a);
//	//*p = 20;//解引用操作符.p前面加一个*的作用就是，对p进行解引用操作，找到他所指向的那个对象a。
//	//printf("%d\n", a);
//	////int a = 10;
//
//	return 0;
//
//}
//结构体
//复杂对象——结构体——我们自己创造出来的一种类型
//struct Book//结构体//复杂对象——结构体——我们自己创造出来的一种类型.
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main()//结构体
//{
//	//利用结构体类型——创建一个该类型的结构体变量
//	//char a;
//	//int b = 0;
//	//scanf("%s%d", &a, &b);
//	//点(.)操作符运用到结构体变量的成员
//	//->结构体指针指向的成员
//	struct Book b1 = { "C语言程序设计",55};
//	struct Book* pb = &b1;
//	printf("%p\n", pb);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);//pb是指针变量,->表示pb指向的那个对象的name
//	printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	b1.price = 111;
//	strcpy(b1.name, "C++"); //strcpy-string copy-字符串拷贝.c语言没有字符串变量,如果想要更改一个字符串，只能重新拷贝.
//	//strcpy只有两个参数，第一个是目的地，第二个是操作对象。是一个库函数,需要头文件(string.h)
//	printf("修改后的价格：%d\n", b1.price);
//	printf("修改后的名字是：%s\n", b1.name);
//	return 0;
//}
//分支和循环。
//1.顺序结构
//2.选择结构
//3.循环结构
int main()
{
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("未成年\n", age);
	else if (age >= 18 && age < 28)
		printf("青年\n", age);
	else
		printf("成年\n", age);
	int* p = &age;
	printf("%d\n", *p);
	printf("%p\n", p);
	printf("%d\n", sizeof(p));*/
	/*int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 20)
			printf("hehe\n");
	else
		printf("haha\n");*/
	//int num = 4;
	//if (5 == num)//= 赋值. ==判断相等
	//{
	//	printf("呵呵\n");
	//}
	/*for (int a = 0; a < 100; a ++)
	{
		if (a % 2 == 1)
		{
		printf("%d是奇数\n", a);
		}
	}*/
	//int day = 0;
	//int n = 1;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("工作日。\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("休息日:");
	//	break;
	//default://代表默认情况，可有可无，建议平时用不到也打上去，处理逻辑不写。如果用到一般是处理非法状况。
	//	printf("一个星期里没有这一天：");
	//	break;
	//}
	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:m++;
	//case 2:n++;
	//case 3:
	//	switch (n)//switch允许嵌套使用。
	//	{
	//	case 1:n++;
	//	case 2:m++; n++;
	//		break;
	//	}
	//case 4:
	//		m++;
	//		break;
	//default:
	//	break;
	//}
	//printf("m= %d. n=%d\n", m, n);
	//int ch = 0;
	////EOF - end of file-> -1
	////ctrl+z
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("请输入密码:>");
	//scanf("%s", password);//输入密码，并存放在password数组中。但是缓冲区中输入的是123456\n
	////函数scanf只读取了123456，没有读取\n，输入缓冲区中还留有一个\n，所以ret=getchar吧\n读取走了，所以就没有停下来，判断不等于Y直接输出了。
	////缓冲区还剩余一个\n
	////getchar();//把缓冲区中的\n给拿走了。不管他输出什么.不过有缺陷，如果有空格就结束读取不了。
	//while ((ch = getchar()) != '\n')
	//{
	//}
	//printf("请确认密码(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功：\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{	
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	return 0;
}

