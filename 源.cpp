#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"

void menu()
{
	printf("*******************************\n");
	printf("****  1.玩三子棋  0.退出   ****\n");
	printf("*******************************\n");
}



//游戏的算法实现
void game()
{
	char ret = 0;
	//数组—存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断是否赢
		ret = Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断是否赢
		ret = Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜！\n");
	}
	else if (ret == 'O')
	{
		printf("电脑获胜！\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		clean_ch();
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			printf("%d\n", input);
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
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