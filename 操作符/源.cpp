#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����������
//int main()
//{
//	int a = 5 / 2;//�õ���
//	int b = 5 % 2;//�õ�����
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//��λ������
//int main()
//{
//	int a = -1;
//	int b = 0;
//	//>> -���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//00000000000000000000000000010000
//	//������λ
//	//�ұ߶�������߲�ԭ����λ
//	//�߼�����
//	//�ұ߶�������߲�0
//	b = a >> 1;                                            
//	printf("%d\n", b);//������λ
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
//	//�洢���ڴ��е��ǲ���
//	// 10000000000000000000000000000001 - ԭ��
//	// 11111111111111111111111111111110 - ����
//	// 11111111111111111111111111111111 - ����
//	//
//	return 0;
//}

//��λ������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//011
//	//101
//	//^ = 110ͬ0��1
//	printf("%d\n", c);
//	return 0;
//}
//������������������ʹ�õ���������
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d,%d", a, b);*/
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d", a, b); 
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//��Ŀ˫Ŀ��Ŀ������
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof����ı�����ռ���ڴ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));//����4���ֽ�
//	printf("%d\n", sizeof(c));//һ���ַ�1���ֽ�
//	printf("%d\n", sizeof(p));//64λָ�����8���ֽ�
//	printf("%d\n", sizeof(arr));//10��Ԫ�ص�����һ��������4���ֽ�һ����40���ֽ�
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//�߼�������
//int main()
//{
//	/*int a = 0;
//	int b = 5;
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);
//	printf("%d\n", d);*/
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//�߼���������ص㣬���ֻҪΪ�٣��ұߵ�����ֱ�Ӳ����ˡ�
//	i = a++ || ++b || d++;//�߼�����������߱�ֻҪΪ�棬�ұߵ���Ҳֱ�Ӳ�����
//	printf("i = %d\na = %d\nb = %d\nc = %d\nd = %d\n",i, a, b, c, d);
//	return 0;
//}

//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ���()���Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//����һ���ṹ�����͡�struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
	struct Stu s1 = { "����",20,"2019010305" };
	struct Stu* ps = &s1;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//�ṹ���������Ա��
	return 0;
}