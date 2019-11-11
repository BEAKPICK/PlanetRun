#ifndef __CONTROL_H__
#define __CONTROL_H__

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <process.h>

using namespace std;

extern int score;

#define ESC 27 //���� ����
#define LEFT 75 //���� ȭ��ǥ Ű ASCII��
#define RIGHT 77 // ������ ȭ��ǥ Ű ASCII��
#define DOWN 80 //�Ʒ� ȭ��ǥ Ű ASCII��
#define UP 72 //���� ȭ��ǥ Ű ASCII��
#define SPACE 32 //�����̽� Ű ASCII��
#define ENTER 13 //���� Ű ASCII��

enum GameAction { MOVE_LEFT = 1, MOVE_RIGHT, MOVE_DOWN, MOVE_UP, MOVE_ENTER, MISSILE, GAME_QUIT };

void gotoXY(int x, int y);
void SetColor(int color);
int getGameAction(int action);
void printXY(int x, int y, const char* str, int color);

#endif
