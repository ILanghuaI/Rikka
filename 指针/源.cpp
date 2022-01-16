#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	//int*p;*p能够访问4个字节
//	//char*p;*p能够访问1个字节
//	//double* p;*p能够访问8个字节
//	//指针类型还决定了：指针走一步走多远（指针的步长）
//	//int* p ;p+1 -->4偏移了4个字节
//	//char* p ;p+1 -->1偏移了1个字节
//	//double* p;p+1--> 便宜了8个字节
//	int a = 0x11223344;
//	int* pa = &a;
//	//char* pc = &a;
//	printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
////指针指向的空间释放也可能导致野指针问题
////数组越界会导致野指针的问题
////当你不知道给指针初始化什么值的时候，你就给他赋值一个空指针-NULL
////规避野指针：
////1指针初始化
////2小心指针越界
////3指针指向的空间释放了，就让其赋值为NULL
////4指针使用之前检查有效性

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//1.&arr - &数组名-数组名不是首元素的地址，数组名表示整个数组 - &数组名 去除的是整个数组的地址
//2.sizeof(arr) - sizeof（数组名） - 数组名表示的整个数组- sizeof（数组名）计算的是整个数组的大小


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	return 0;
//}

//指针数组 - 数组 - 存放指针的数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//整型数组 - 存放整形
//	//字符数组 - 存放字符
//	//指针数组 - 存放指针
//	int arr[10];
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void recerse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////init(arr,sz);//把数组初始化为0
//	//print(arr,sz);//把数组打印出来
//	//recerse(arr,sz);//把数组倒置
//	//print(arr, sz);
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

int i;//全局变量-不初始化-默认是0
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");//sizeof()-计算变量/类型所占内存的大小 >=0 无符号数	
	}
	else
	{
		printf("<\n");
	}
	return 0;
}