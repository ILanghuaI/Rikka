#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include "game.h"


void menu()
{
	printf("***********************************\n");
	printf("************  1.play  *************\n");
	printf("************  0.exit  *************\n");
	printf("***********************************\n");
}

void game()
{
	system("cls");
	printf("扫雷！\n");
	//雷的信息储存
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11

	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'O');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
	DisplayBoard(mine, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		qingkong();
		switch (input)
		{
		case 1:
			game();
			printf("三秒后返回主菜单！");
			Sleep(3000);
			system("cls");
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}