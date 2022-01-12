#pragma once
#define ROW 3
#define COL	3
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void  clean_ch();


//判断函数要判断出4种情况
//1 还未胜利，继续游戏 'c'
//2 平局 'Q'
//3 玩家胜利 '*'
//4 电脑胜利 'O'
char Iswin(char board[ROW][COL], int row, int col);