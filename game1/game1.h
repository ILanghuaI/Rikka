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


//�жϺ���Ҫ�жϳ�4�����
//1 ��δʤ����������Ϸ 'c'
//2 ƽ�� 'Q'
//3 ���ʤ�� '*'
//4 ����ʤ�� 'O'
char Iswin(char board[ROW][COL], int row, int col);