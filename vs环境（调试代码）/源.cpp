#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


//f5-��������-��f9���ʹ�õ�
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
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//
//	}
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�	
//	while (*dest++ = *src++)
//	{
//
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//int main()
//{
//	const int  num = 10;
//	int n = 100;
//	//const int* p = &num;
//	//*p = 20;//error  const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵����ͨ��p�ı�*p��num����ֵ
//	int* const p = &num;
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ���������p���ܱ��ı�
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
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