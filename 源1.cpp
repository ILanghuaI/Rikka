#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******************************\n");
	printf("*****  1.play    0.exit  *****\n");
	printf("******************************\n");
}

//RAND_MAX-���ɵ�������0��32767֮�䣺7fff

void game()
{
	printf("������׼��.\n");
	/*Sleep(1000);
	printf("3\n");
	Sleep(1000);
	printf("2\n");*/
	Sleep(500);
	printf("Ԥ��\n");
	Sleep(500);
	printf("��ʼ��\n");
	//1 ����һ�������
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//������������Ӹ�%(ģ)���������ɵ�������1-100֮�䣬��Ϊ%100��ֵ����0��99��+1����0��100
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("������һ��һ��һ�ٵ����֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ָ��NULL.//unsigned int�Ǽ�������������һ�ֱ�ʾ���ڵ���0����������
	//��ʱ����������������������ʼ��.
	// time_t time(time_t *timer) time_t��ת������鿴
	//ʱ�������ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0��0��0) = (xxxx)��
	//���������һ�ξ͹��ˣ��������������ʼ��
	do
	{
		menu();
		printf("��ѡ��(������1��0)��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}