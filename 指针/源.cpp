#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	//int*p;*p�ܹ�����4���ֽ�
//	//char*p;*p�ܹ�����1���ֽ�
//	//double* p;*p�ܹ�����8���ֽ�
//	//ָ�����ͻ������ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//	//int* p ;p+1 -->4ƫ����4���ֽ�
//	//char* p ;p+1 -->1ƫ����1���ֽ�
//	//double* p;p+1--> ������8���ֽ�
//	int a = 0x11223344;
//	int* pa = &a;
//	//char* pc = &a;
//	printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
////ָ��ָ��Ŀռ��ͷ�Ҳ���ܵ���Ұָ������
////����Խ��ᵼ��Ұָ�������
////���㲻֪����ָ���ʼ��ʲôֵ��ʱ����͸�����ֵһ����ָ��-NULL
////���Ұָ�룺
////1ָ���ʼ��
////2С��ָ��Խ��
////3ָ��ָ��Ŀռ��ͷ��ˣ������丳ֵΪNULL
////4ָ��ʹ��֮ǰ�����Ч��

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

//1.&arr - &������-������������Ԫ�صĵ�ַ����������ʾ�������� - &������ ȥ��������������ĵ�ַ
//2.sizeof(arr) - sizeof���������� - ��������ʾ����������- sizeof�������������������������Ĵ�С


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
//}

//ָ������ - ���� - ���ָ�������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//�������� - �������
//	//�ַ����� - ����ַ�
//	//ָ������ - ���ָ��
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
//	////init(arr,sz);//�������ʼ��Ϊ0
//	//print(arr,sz);//�������ӡ����
//	//recerse(arr,sz);//�����鵹��
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

int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");//sizeof()-�������/������ռ�ڴ�Ĵ�С >=0 �޷�����	
	}
	else
	{
		printf("<\n");
	}
	return 0;
}