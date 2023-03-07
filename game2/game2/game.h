#pragma once

//包含头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号定义
#define ROW 9
#define COL 9
#define EASY_COUNT 10

#define ROWS ROW + 2
#define COLS COL + 2

//函数声明
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);