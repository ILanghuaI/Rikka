#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//ָ��ĸ���
//1.ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
//2.ָ��Ĵ�С�ǹ̶���4/8���ֽڣ�32λƽ̨/64λƽ̨����
//3.ָ���������͵ģ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
//4.ָ�������
//

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

/*int main()
{
	char* p = "abcdef";
	*p = 'W';
	printf("%s\n", p);
}*///Sementation fault - �δ���

//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//*p = 'W';
//	printf("%s\n", p);
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//������ֵͬ�ĵ�ַ�ڲ�ͬ�ռ��ϵ�ʱ������ֵ���ǲ�һ����
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//p1��p2��ָ����ͬһ��ֵ�ĵ�ַλ��
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//}

//ָ������ ������,�������ָ��ġ�
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p\n", arr[i]);
//		printf("%p\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	printf("%d", *parr[1]);
//	return 0;
//}

//int main()
//{
//	//int* p = NULL;//p������ָ�� - ָ�����ε�ָ��  
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ��
//	////����ָ�� - ָ�������ָ��
//	//int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char(*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d", *(*pa + i));//*pa ==arr ����Ԫ�ص�ַ�������ü�i������Ԫ��+i
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("d", (*pa)[i]);
//	}*/
//	return 0;
//}

//print1����Ĳ������������ʽ
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x;i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("%d\n");
//	}
//}
////print2����Ĳ�����ָ�����ʽ
//void print2(int* p[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//
//			printf("%d ", *(*(p + i) + j));//Ҳ����д��printf("%d ",(*(p+i))[j]);
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ",*( p[i]+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);//arr - ������ -������������Ԫ�ص�ַ
//	//��arr�����һά���飬��һ�������һ��Ԫ��
//	print2(arr, 3, 5);
//	return 0;
//}
////int arr[5] - arr��һ��5��Ԫ�ص���������
////int* parr1[10] - parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*.parr1��ָ������
////int (*parr2)[10] - parr2��һ��ָ��,��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int - parr2
////������ָ��
////int (*parr3[10])[5] - parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����
////һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
//
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� - ָ������
//	int* p3;//����ָ�� - ָ�����ε�ָ��
//	char* p4;//�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int (* pa)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//	int(*parr3[10])[5] = &arr2;//����ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i] == *(arr+i) ==*(p+i) ==p[i]
//	}
//	return 0;
//}


//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])//�п���ʡ�ԣ��в���ʡ��
////{}
//void test3(int** arr)//error ���У�����ĵ�ַ���ܷŵ�����ָ����ͷ
//{}
//void test4(int (*arr)[5])//ok
//{}
////��ά���鴫��
//int main()
//{
//	int arr[3][5] = {0};
//	/*test(arr);//��ά���鴫��
//	test1(arr);
//	test2(arr);*/
//	//test3(arr);
//	test4(arr);
//	return 0;
//}

//
//void test1(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//}

//����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//����ָ�� - ָ������ָ��
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//printf("%d\n", add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &add);
//	printf("%p\n", add);*/
//	int (*pa)(int, int) = add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hello world");
//	return 0;
//}
//(*(void (*)()0)()//��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ
//����0��ַ���ĸú���

//void(*signal(int, void(*)(int)))(int);
////��
//typedef void(* pfun_t)(int);//�Ժ���ָ��������������ʱ����pfun_t
//pfun_t signal(int, pfun_t);//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��
//ָ��ĺ���������int������������void��signal�����ķ�������Ҳ��һ��
//ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//printf("%d\n", add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &add);
//	printf("%p\n", add);*/
//	int (*pa)(int, int) = add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));//���õ�ʱ����Խ�����Ҳ���Բ���//�������������ǵ�ַ
//	return 0;
//}

//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = add;//sub/mul/div
//	int (*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//
//}

//char* my_strcpy(char* dest,const char* src)
//{}
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pff[4])(char*, const char*) = { my_strcpy };
//	return 0;
//}


void clean_ch()
{
	while (getchar() != '\n');
}
void menu()
{
	printf("************************\n");
	printf("**1. add        2. sub**\n");
	printf("**3. mul        4. divv**\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int divv(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	while (input)
//	{
//		system("cls");
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		clean_ch();
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n",add(x,y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����û�����ѡ��\n");
//			break;
//		}
//		system("pause");
//	}
//}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	//pff����ָ������ - ת�Ʊ�
//	int (*pff[])(int, int) = { 0,add,sub, mul,div };
//	while (input)
//	{
//		system("cls");
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		clean_ch();
//		if (input >= 1 && input <= sizeof(pff)/sizeof(pff[0])-1)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			clean_ch();
//			int ret = pff[input](x, y);
//			printf("���ǣ�%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		system("pause");
//	}
//}
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("����������������:>");
	scanf("%d%d", &x, &y);
	clean_ch();
	printf("���� = %d\n", pf(x, y));
}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	while (input)
//	{
//		system("cls");
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		clean_ch();
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����û�����ѡ��\n");
//			break;
//		}
//		system("pause");
//	}
//}

//int main()
//{
//	int arr[] = { 0 };
//	int (*p)[10] = &arr;
//
//	int(*pf)(int, int);//����ָ��
//	int (*pf[4])(int, int);//pf��һ������ - ����ָ�������
//	int (*(*pff)[4])(int,int) = &pf;
//	//pff��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������hiһ������ָ��
//	return 0;
//}

//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ
//�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���
//�ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����
//������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ��

//void print(char* str)
//{
//	printf("hehe");
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//void bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz -1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

struct stu
{
	char name[20];
	int age;
};

//qsort - ���������������͵�����
//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, sz);
//	return 0;
//}

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubblesort(void* base,int sz,int width,int (*cmp)(void*e1,void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���	
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ��
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ��
	return ( (int) * (float*)e1 - *(float*)e2);
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test2()
{
	float f[] = { 9.0, 8.0,7.0,6.0,5.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}
cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]),cmp_stu_by_age );
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ-�������
	//			  Ҫ�����Լ�ʵ�֣��������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubblesort�ĳ���Աһ��֪���Լ��������ʲô����
	//Ӧ��֪����αȽϴ����������е�Ԫ��
	bubblesort(arr,sz,sizeof(arr[0]), cmp_int);
}
void test5()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubblesort(s, sz, sizeof(s[0]),cmp_stu_by_name );
}
int main()
{
	//struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	//float f[] = {9.0, 8.0,7.0,6.0,5.0};
	//bubblesort(arr, sz);
	test1();
	test2();
	test3();
	test4();
	return 0;
}
//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//void* ���͵�ָ�� ���ܽ��н����ò���
//qsort - �⺯�� - ����
//quick sort -