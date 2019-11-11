#ifndef __PLAY__H
#define __PLAY__H

#include"control.h"

extern clock_t start, mid, mid2;
extern int speed, score;

class Me
{
public:
	Me() { Meprint(); };
	static int X;					//내 X좌표
	static int Y;					//내 Y좌표
	static int Life;				//내 수명
	static void Meprint();			//나 출력
	static void Meerase();			//나 지우기(이동을 위해)
	static int missilenum;			//미사일개수
};

class Missile
{
public:
	Missile();
	~Missile();
	static int count;
	static int X;
	static int Y;
};

class enemy1
{
public:
	enemy1();
	static int X; //적1의 x좌표
	static int Y; //적1의 y좌표
	static int rotationwidth;
	static int go;
	static void enemy1pattern();
	static void enemy1print();
	static void enemy1erase();
	static void enemy1appear();
};

class enemy2
{
public:
	enemy2();
	static int X; //적2의 x좌표
	static int Y; //적2의 y좌표
	static int rotationwidth;
	static int go;
	static void enemy2pattern();
	static void enemy2print();
	static void enemy2erase();
	static void enemy2appear();
};

class enemy3
{
public:
	enemy3();
	static int X; //적3의 x좌표
	static int Y; //적3의 y좌표
	static int rotationwidth;
	static int go;
	static void enemy3pattern();
	static void enemy3print();
	static void enemy3erase();
	static void enemy3appear();
};

class missileitem
{
public:
	static void missileitemappear();
	static int X;
	static int Y;
	static void itemprint();
	static void itemerase();
};

class boosteritem
{
public:
	static void boosteritemappear();
	static int X;
	static int Y;
	static void itemprint();
	static void itemerase();
};

class hpitem
{
public:
	static void hpitemappear();
	static int X;
	static int Y;
	static void itemprint();
	static void itemerase();
};

void Mecollision();
void exeGameAction();
void enemymanage();
void itemmanage();
void printinfo();
void printscore();

#endif
#pragma once
