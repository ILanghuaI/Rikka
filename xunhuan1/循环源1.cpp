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
	//for (i = 1; i <= 10; i++)//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����.2����for����ѭ�����Ʊ�����ȡֵ����ǰ�պ������д�������������ԡ�
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d\n", i);
	//}
	////forѭ���ĳ�ʼ�����������ж϶�����ʡ��
	//����forѭ���� �жϲ��� �����ʡ�ԣ����ж��������Ǻ�Ϊ����
	//������Ƿǳ��������������Ҳ�Ҫ���ʡ�ԡ�
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
		//printf("������n��ֵ��");
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
	printf("��������Ҫʹ�õ����룺");
	scanf("%s", password1);
	for(i = 0; i < 3 ;i++)
	{
		printf("��ȷ��������룺");
		scanf("%s", password);
		if (strcmp(password ,password1)==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("���Ѿ�����3������������Զ��˳���");*/
	//int n = 0;
	//int i = 0;
	//int ret = 1;
	//int sum = 0;
	//printf("������i��ֵ��");
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
	printf("��������Ҫ�ҵ�����");
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±���%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");*/
	//int arr[] = { 1,2,3,4,5,6,7,8,10,12 };
	//int k = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
	//int left = 0;//���±�
	//int right = sz - 1;//���±�
	//printf("��������Ҫ�ҵ�����");
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
	//		printf("�ҵ��ˣ��±���:%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ���\n");
	//}arr1
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	////int right = sizeof(arr1) / sizeof(arr1[0] - 1);//-1�Ǵ���ģ���Ϊ�ַ������Զ��Ӹ�\n,error.
	//int right = strlen(arr1)-1;
	//

	////while (left<=right)
	////{
	////	arr2[left] = arr1[left];
	////	arr2[right] = arr1[right];
	////	printf("%s\n", arr2);
	////	//��Ϣһ��.
	////	Sleep(200);
	////	system("cls");//ִ��ϵͳ����ĺ���-cls - �����Ļ
	////	left++;
	////	right--;
	////}
	////printf("%s\n", arr2);
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//printf("������3������:");
	//scanf("%d%d%d", &a, &b, &c);//�㷨ʵ��a�����ֵ��b��֮��c��Сֵ��
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
	//	printf("100����3�ı����Ѿ�ȫ�����롣");
	/*int m = 0;
	int n = 0;
	printf("������m��n��ֵ��");
	scanf("%d%d", &m,&n);
	while (m % n)
	{
		int r = 0; 
		r = m % n;	
		m = n;
		n = r;
	}
	printf("���Լ���ǣ�%d\n", n);
 	return 0;*/
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	//�ж�i�Ƿ�Ϊ����
	//	//�����жϵĹ��� 
	//	//1.�Գ���
	//	//����2->-1
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++)//sqrt - ��ƽ������ѧ�⺯����i= a*b a��b��������һ������<=��ƽ��i�����2��i֮�䶼û��һ�������Ա������Ļ����Ϳ���˵����һ��������
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
	//system() - ִ��ϵͳ����ġ�
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	return 0;
}