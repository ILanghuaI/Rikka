#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include "add.h"


//������������������������棬���Ҫ������Ҫ������
//��������
//int Add(int x,int y);//x y����ʡ��
//���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ��
//����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//����������һ��Ҫ����ͷ�ļ��еġ�
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�

//void Add(int* p)
//{
//	(*p)++;//�Ӽӵ����ȼ��Ƚϸߣ�����Ҫ��*p�Ӹ����š�
//}

int get_max(int x, int y)
{
	int z = 0;
	z = x > y ? x : y;
	return z;
}
void get_change(int x, int y)//���������βΡ���ʽ�ϵĲ�������Ҫ�õ�ʱ��Ż���ʱ�����ڴ棬��Ϊab��xy�ĵ�ַ��һ��������xy�����˺�abû�й�ϵ��
//���˺������Զ�������
{
	int z = 0;
	z = y;
	y = x;
	x = z;
}
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
void get_change2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int is_leap_year(int x)//�����ﲻҪ���printf��Ҫ�򵥵�һ���������ܾ��пɸ����ԡ�
{
	if (x % 4 == 0 && x % 100 != 0 || (x % 400 == 0))
	{
		printf("%d������", x);
		return 1;
	}
	else
	{
		printf("%d��������", x);
		return 0;
	}
}

int get_su(int x)//�ж�����
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

int binary_search(int arr[], int k,int sz)//�����ϣ�arr��һ��ָ�룬�������飬�����������ֵ��1
{
	//�㷨��ʵ��
	int left = 0;
	int right = sz ;
	while (left <= right)//һ��ҪС�ڵ���
	{
		int mid = (left + right) / 2;//ѭ������һ��Ҫ��ѭ����ͷ
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

//Ƕ�׵��ú���ʽ����
//Ƕ�׵��ã�
//�����ͺ���֮���ǿ����л�����ϵ�
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

//��ʽ���ʣ�
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	//int len = 0;
//	////1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	////2
//	//printf("%d\n", strlen("abc"));
//	//printf("%d\n", printf("%d", printf("%d", 43)));//printf�ķ���ֵ��int���ͣ��Ǵ�ӡ��ƵĻ�ϵ��ַ��������ȴ�ӡ43��43�������ַ������Է���ֵ��2
//	////Ȼ���ӡ2���ַ�����1�����Դ�ӡ1
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
//	printf("%s\n",arr2);*///bit/0####### /0��һ���ַ��Ľ�����־��
//	//strcpy - #string copy  �ַ�������
//	//strlen - string length -�ַ��������йء�
//	/*char arr[] = "hello world!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);*/
//	//�Զ��庯��
//	//ret_type fun_name(para1,*)//�������� ������ ��������
//	//{
//	//		statement//���������壬�������Ǻ�����ʵ�֡�
//	//}
//	//int a = 0;
//	//int b = 0;
//	//printf("������a��ֵ��");
//	//scanf("%d", &a);
//	//printf("������b��ֵ��");
//	//scanf("%d", &b);
//	//get_change2(&a, &b);//ʵ�Σ���ʵ���������Ĳ�����������ȷ����ֵ��
//	////����get_change2����
//	////�д�ֵ���úʹ�ַ����
//	////��ֵ���ã�
//	////�������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//	//// ��ַ���ã�
//	////��ַ�����ǰɺ����ⲿ�����ĵ�ַ���ݸ�����������һ�ֵ��ú����ķ�����
//	////���ִ��η��������ú����ͺ�����ߵı���������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����
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
//	//printf("��������Ҫ�жϵ�ֵ��");
//	//scanf("%d", &k);
//	////is_leap_year(i);
//	//int ret = binary_search(arr,k,sz);//arr����ֻ���׸�Ԫ�صĵ�ַ
//	//if (ret == -1)
//	//{
//	//	printf("�Ҳ���ָ��������");
//	//}
//	//else
//	//{
//	//	printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	//}
//	return 0;
//} 



//�����ݹ�
//�����������ı�̼��ɳ�Ϊ�ݹ飨recursion�����ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�һ�����̻���
//�������䶨���˵������ֱ�ӻ��߼�ӵ��������һ�ַ�������ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ����
//���ƵĹ�ģ��С����������⣬�ݹ����ֻ��Ҫ�����ĳ���Ϳ��������������������Ҫ�Ķ���ظ����㣬�������˳����
//���������ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С��
//�ݹ��������Ҫ������
//1
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//2
//ÿ�εݹ����֮��Խ��Խ�ӽ�������������� 

//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//��ѭ����ӡhehe
//ջ������ݹ鳣���Ĵ���Stack overflow
//�����ڴ��ʱ���ڴ��Ϊ��������һ����ջ����һ���Ƕ�����һ���Ǿ�̬��
//ջ�����ֲ������������β�
//��������̬���ٵ��ڴ棬malloc��calloc
//��̬����ȫ�ֱ�����static���εı�����
//ÿ�ε���main��������Ҫ��ջ������һ�οռ䣬�����ѭ�����ÿռ䣬ջ�ռ�ͻᱻ���꣬һ�����꣬�ͻ���ʾstack overflow��ջ����ˡ�
//����ݹ�����ֹ�ĵ�����ȥ���ͻ�����������
//�и���վҲ��StackOverflow���൱�ڳ���Ա��֪����ȫ���Ե�

//�ݹ�����д��ʱ��Ҫ���������������������������ʱ��ݹ�㲻�ټ�����
//����ÿ�εݹ����֮��Խ��Խ�ӽ��������������

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int my_strlen(char* str)//�����ַ����ĳ���,��ͨ����ʱ����
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
