#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ��ѧ��
//���֡����䡢�Ա𡢵绰
//struct-�ṹ��ؼ���  stu - �ṹ���ǩ - �ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1��s2��s3������ȫ�ֱ����Ľṹ�����
//����һ���ṹ������

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu����
//
// struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct s S;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world,",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.S.arr);
//	printf("%lf\n", t.S.d);
//	printf("%s\n", t.pc);
//	//struct stu s;//s�ֲ�����
//	return 0;
//}

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu����
//void Print1(stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void Print2(stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("name: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "����",40,"15598886688","��" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ
//�����Ƚϴ� ���Իᵼ�����ܵ��½�
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��

//ջ�����ֲ���������������ʽ�����������ĵ���Ҳ���ٿռ�
//��������̬�ڴ�ֲ���malloc/free��realloc��calloc
//��̬����ȫ�ֱ�������̬����
//ջ���Ƚ����������ȳ�������һ��Ԫ�أ�ѹջ��ɾ��һ��Ԫ�أ���ջ
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = add(a, b);
	return 0;
}