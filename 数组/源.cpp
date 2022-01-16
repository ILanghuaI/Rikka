#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//数组是一组相同类型元素的集合，数组的创建方式： 
//type_t   arr_name  [const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小，例如： int arr[0] = 0



//int main()
//{
//	//创建一个数组—用来存放整型—10个
//	int arr[10];
//	char arr2[5];
//	//int n = 5;
//	//char ch[n];//error 中括号内只能放常量
//	int arr3[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr4[] = { 'a','b','c'};//同样初始化为0,可以输入数字，按照ASC码表输出
//	char arr5[] = "abc";
//	char arr6[] = "abcdef";//不指定大小会根据初始化的内容来确定数组有几个元素，（动态创建和静态创建）
//	printf("%d\n", sizeof(arr6));//sizeof 计算arr所占空间的大小 7个元素 7*1 =7
//	printf("%d\n", strlen(arr6));//strlen 求字符串的长度{abcdef\0}遇到斜杠0停止，所以是6
//	//strlen 和sizeof没有什么关联 
//	//strlen 是求字符串长度的—只能针对字符串求长度——库函数，使用要引头文件
//	//sizeof 计算变量、数组、类型的大小—单位是字节——sizeof是操作符
//	printf("%s\n", arr4);
//	printf("%d\n", sizeof(arr5));//arr5  abc\0
//	printf("%d\n", sizeof(arr4));//arr4  a b c strlen继续往后找直到\0，随机值
//	printf("%d\n", strlen(arr5));
//	printf("%d\n", strlen(arr4));
// 	return 0;
//}


//一维数组
//对于数组的使用我们之前介绍了一个操作符：[] ，下标引用操作符。它其实就是数组访问的
//操作符。
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%-2d] = %p\n",i,&arr[i]);//数组里的内存是连续开辟的，地址是连续的
//	}
//	return 0;
//}

//二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//二维数组创建时，行可以省略，列不可以省略。
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存储
//二维数组里的内存也是连续开辟的，地址也是连续的
//int main()
//{
//	int arr[3][4]={1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%-2d][%-2d] = %p\n", i, j, &arr[i][j]);
//			printf(" arr[%-2d][%-2d] = %d\n", i, j, arr[i][j]);
//		}
//	}
//	return 0;
//}

//数组作为函数参数
//我们写代码的时候，往往会将数组作为参数传个函数，比如我们要实现一个冒泡排序（算法思想）函数
//将一个整形数组排序，我们会这样用函数：
void bubble_sort(int arr[],int sz)//冒泡函数
{
	//首先确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排的数据已经是有序的
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j <sz -1-i ; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//int main()
//{
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名) - 数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小
	//单位是字节
	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);//输出值一样，可见数组名就是我们数组的首元素地址。
	printf("%d\n", *arr);//解引用
	printf("%p\n", &arr);//数组的地址，结果也是首元素的地址，不过代表的是整个数组的地址
	printf("%p\n", &arr + 1);
	return 0;
}