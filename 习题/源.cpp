#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int count_bit_one(unsigned int a)//�Ӹ�unsigned ����a��ʲô���ֶ���Ϊ�޷�����
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	printf("������һ������:");
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count =count_bit_one(a);
//
//	printf("count = %d\n", count);
//	system("pause");//system�⺯��-ִ��ϵͳ����-pause����ͣ��
//	return 0;
//}

//int countss(int a, int b)
//{
//	int count=0;
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//void print(int a)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d%d", &a, &b);
//	int count = countss(a,b);
//	printf("count = %d\n", count);
//	printf("\n");
//	print(a ^ b);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for(i = 1; i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
////}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
//���磬����DigitSum��1729������Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19
//
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

double Pow(int n, int k)
{
	//n^k = n*n^(k-1) 
	if (k > 0)
	{
		return Pow(n, k - 1) * n;
	}
	else if (k == 0)
		return 1;
	else 
	{
		return (1.0 / (Pow(n, -k)));
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}