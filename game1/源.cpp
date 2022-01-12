#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"

void menu()
{
	printf("*******************************\n");
	printf("****  1.��������  0.�˳�   ****\n");
	printf("*******************************\n");
}



//��Ϸ���㷨ʵ��
void game()
{
	char ret = 0;
	//���顪����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		ret = Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		ret = Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
	}
	else if (ret == 'O')
	{
		printf("���Ի�ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		clean_ch();
		switch (input)
		{
		case 1:
			printf("������\n");
			printf("%d\n", input);
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			printf("%d\n", input);
			break;
		}	
	} while (input);
}

int main()
{
	test();
	return 0;
}