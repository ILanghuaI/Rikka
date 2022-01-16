#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


//f5-启动调试-和f9配合使用的
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d",10 - i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//system("pause");
//	return 0;
//}

//void my_strcpy(char* dest, const char* src)
//{
//	//1
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	src++;
//	//	dest++;
//	//}
//	//*dest = *src;//'\0'
//	//2
//	/*while (*dest++ = *src++)
//	{
//		;
//	}*/
//	//3
//	/*if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//
//		}
//	}*/
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//
//	}
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符	
//	while (*dest++ = *src++)
//	{
//
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//int main()
//{
//	const int  num = 10;
//	int n = 100;
//	//const int* p = &num;
//	//*p = 20;//error  const 放在指针变量的*左边时，修饰的是*p，也就是说不能通过p改变*p（num）的值
//	int* const p = &num;
//	//const 放在指针变量的*右边时，修饰的是指针变量本身，p不能被改变
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 10;
	int sum = add(a, b);
	printf("%d\n", sum);
}