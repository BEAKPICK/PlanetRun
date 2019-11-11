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

#define ESC 27 //게임 종료
#define LEFT 75 //왼쪽 화살표 키 ASCII값
#define RIGHT 77 // 오른쪽 화살표 키 ASCII값
#define DOWN 80 //아래 화살표 키 ASCII값
#define UP 72 //위쪽 화살표 키 ASCII값
#define SPACE 32 //스페이스 키 ASCII값
#define ENTER 13 //엔터 키 ASCII값

enum GameAction { MOVE_LEFT = 1, MOVE_RIGHT, MOVE_DOWN, MOVE_UP, MOVE_ENTER, MISSILE, GAME_QUIT };

void gotoXY(int x, int y);
void SetColor(int color);
int getGameAction(int action);
void printXY(int x, int y, const char* str, int color);

#endif
