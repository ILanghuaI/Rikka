#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	/*int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}*/
	//for (i = 1; i <= 10; i++)//不可在for循环体内修改循环变量，防止for循环失去控制.2建议for语句的循环控制变量的取值采用前闭后开区间的写法。不过不绝对。
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d\n", i);
	//}
	////for循环的初始化，调整，判断都可以省略
	//但是for循环的 判断部分 如果被省略，那判断条件就是恒为正。
	//如果不是非常的熟练，建议大家不要随便省略。
	/*int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}*/
	/*int i,k;
	for (i = 0, k = 0; k = 0; i++, k++)
	{
		k++;
	}*/
	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);*/
		//int i = 0;
		//int n = 0;
		//int a;
		//int sum = 0;
		//printf("请输入n的值：");
		//scanf("%d", &n);
		//for (i = 1; i <=n; i++)
		//{
		//	int ret = 1;
		//	for (a = 1; a <= i; a++)
		//	{
		//		ret = ret * a;
		//	}
		//	sum += ret;
		//}
		//printf("%d", sum);
	/*int i = 0;
	char password[20] = { 0 };
	char password1[20] = { 0 };
	printf("请输入你要使用的密码：");
	scanf("%s", password1);
	for(i = 0; i < 3 ;i++)
	{
		printf("请确认你的密码：");
		scanf("%s", password);
		if (strcmp(password ,password1)==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("你已经连续3次输入错误！已自动退出。");*/
	//int n = 0;
	//int i = 0;
	//int ret = 1;
	//int sum = 0;
	//printf("请输入i的值：");
	//scanf("%d", &i);
	//for (n = 1; n <= i; n++)
	//{
	//	ret = ret * n;
	//	sum += ret;
	//}
	//printf("sum = %d\n", sum);
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入你要找的数：");
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");*/
	//int arr[] = { 1,2,3,4,5,6,7,8,10,12 };
	//int k = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
	//int left = 0;//左下标
	//int right = sz - 1;//右下标
	//printf("请输入你要找的数：");
	//scanf("%d", &k);
	//for (int i = 0; left<=right; i++)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标是:%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到\n");
	//}arr1
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	////int right = sizeof(arr1) / sizeof(arr1[0] - 1);//-1是错误的，因为字符串会自动加个\n,error.
	//int right = strlen(arr1)-1;
	//

	////while (left<=right)
	////{
	////	arr2[left] = arr1[left];
	////	arr2[right] = arr1[right];
	////	printf("%s\n", arr2);
	////	//休息一秒.
	////	Sleep(200);
	////	system("cls");//执行系统命令的函数-cls - 清空屏幕
	////	left++;
	////	right--;
	////}
	////printf("%s\n", arr2);
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//printf("请输入3个数字:");
	//scanf("%d%d%d", &a, &b, &c);//算法实现a中最大值，b次之，c最小值。
	//if (a < b)
	//{
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c)
	//{
	//	int tmp = a;````````
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c)
	//{
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//printf("%d%d%d\n", a, b, c);
	//int i = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)
	//		printf("%d\n", i);
	//}
	//	printf("100以内3的倍数已经全部输入。");
	/*int m = 0;
	int n = 0;
	printf("请输入m和n的值：");
	scanf("%d%d", &m,&n);
	while (m % n)
	{
		int r = 0; 
		r = m % n;	
		m = n;
		n = r;
	}
	printf("最大公约数是：%d\n", n);
 	return 0;*/
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	//判断i是否为素数
	//	//素数判断的规则 
	//	//1.试除法
	//	//产生2->-1
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++)//sqrt - 开平方的数学库函数。i= a*b a和b中至少有一个数字<=开平方i。如果2到i之间都没有一个数可以被整除的话，就可以说明是一个素数。
	//	{
	//		if (i % j == 0)
	//		{ 
	//			break;
	//		}
	//	}
	//	if (j > sqrt(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount = %d\n", count);
	//return 0;
	//int i = 0;
	//double sum = 0.0;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += 1.0 / i;
	//}
	//printf("%lf\n", sum);
	/*int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, j * i);
		}
		printf("\n");
	}*/
	//shutdown -s -t 60
	//system() - 执行系统命令的。
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	return 0;
}