#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//描述一个学生
//名字、年龄、性别、电话
//struct-结构体关键字  stu - 结构体标签 - 结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1，s2，s3是三个全局变量的结构体变量
//定义一个结构体类型

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu类型
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
//	//struct stu s;//s局部变量
//	return 0;
//}

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu类型
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
//	stu s = { "李四",40,"15598886688","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统
//开销比较大， 所以会导致性能的下降
//结论：结构体传参的时候，要传结构体的地址。

//栈区：局部变量、函数的形式参数、函数的调用也开辟空间
//堆区：动态内存分布、malloc/free、realloc、calloc
//静态区：全局变量、静态变量
//栈：先进后出，后进先出；插入一个元素：压栈；删除一个元素：出栈
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