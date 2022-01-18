#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//struct s
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct s a, * p = &a;
//	a.a = 99;
//	printf("%d\n", );
//	return 0;
//}

//int qi(int a)
//{
//	int sum = 0;
//	if (a >= 2)
//	{
//
//		return sum + qi(a/2);
//	}
//
//}
//int main()
//{
//	int a = 0;
//	printf("请输入多少钱：");
//	scanf("%d", &a);
//	qi(a);
//	printf("%d", a);
//	return 0;
//
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((left<right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;//0x1234 == 0x 00 00 12 34 
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//-128 --> 127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1,-2 ....-128 127 126 125 124.....3 2 1 0 -1 -2...
//	printf("%d\n", strlen(a));
//	return 0;	
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//找凶手
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

//面题
//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名。
//请问最少比赛几次
//8
//

//烧香问题
//有一种香，材质不均匀，但是每一根这样的香，燃烧完恰好是一个小时
//给你2根香，帮我确定一个15分钟的时间段
//

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; d <= 5; e++)
					{
						if (((b==2 )+ (a==3 ) == 1) &&
						    ((b==2) + (e==4 ) == 1) &&
						    ((c==1) + (d==2 ) == 1) &&
						    ((c==5) + (d==3 ) == 1) &&
						    ((e==4) + (a==1 ) == 1))
						{
							if (a * b * c * d * e == 120)
							{
								printf("%d %d %d %d %d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}