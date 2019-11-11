#ifndef __PLAY__H
#define __PLAY__H

#include"control.h"

extern clock_t start, mid, mid2;
extern int speed, score;

class Me
{
public:
	Me() { Meprint(); };
	static int X;					//�� X��ǥ
	static int Y;					//�� Y��ǥ
	static int Life;				//�� ����
	static void Meprint();			//�� ���
	static void Meerase();			//�� �����(�̵��� ����)
	static int missilenum;			//�̻��ϰ���
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
	static int X; //��1�� x��ǥ
	static int Y; //��1�� y��ǥ
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
	static int X; //��2�� x��ǥ
	static int Y; //��2�� y��ǥ
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
	static int X; //��3�� x��ǥ
	static int Y; //��3�� y��ǥ
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
