#include"play.h"
#include"stopstar.h"

void Me::Meprint()		//내가 이동할때
{
	printXY(Me::X, Me::Y, "〓", 10);
	/*gotoXY(Me::X, Me::Y);
	cout << "〓";*/
	printXY(Me::X, Me::Y + 1, "■■▶", 10);
	/*gotoXY(Me::X, Me::Y + 1);
	cout << "■■▶";*/
	printXY(Me::X, Me::Y + 2, "〓", 10);
	/*gotoXY(Me::X, Me::Y + 2);
	cout << "〓";*/
}

void Me::Meerase()		//내가 이동할때
{
	printXY(Me::X, Me::Y, "  ", 10);
	/*gotoXY(Me::X, Me::Y);
	cout << "  ";*/
	printXY(Me::X, Me::Y + 1, "      ", 10);
	/*gotoXY(Me::X, Me::Y + 1);
	cout << "      ";*/
	printXY(Me::X, Me::Y + 2, "  ", 10);
	/*gotoXY(Me::X, Me::Y + 2);
	cout << "  ";*/
}

void missilecollision()		//미사일 이벤트
{
	Missile missile;
	while (1)
	{
		exeGameAction();
		Mecollision();
		if (((Missile::X == enemy1::X + 1) || (Missile::X == enemy1::X)) && Missile::Y == enemy1::Y)
		{
			enemy1::enemy1erase();
			enemy1::X = 80;
			enemy1::Y = -1;
			return;
		}
		if (((Missile::X == enemy2::X + 1) || (Missile::X == enemy2::X)) && Missile::Y == enemy2::Y)
		{
			enemy2::enemy2erase();
			enemy2::X = 80;
			enemy2::Y = -1;
			return;
		}
		if (((Missile::X == enemy3::X + 1) || (Missile::X == enemy3::X)) && Missile::Y == enemy3::Y)
		{
			enemy3::enemy3erase();
			enemy3::X = 80;
			enemy3::Y = -1;
			return;
		}
		printXY(Missile::X, Missile::Y, "      ", 10);
		Sleep(3);
		Missile::X++;
		if (Missile::X == 69) return;
		printXY(Missile::X, Missile::Y, "**|==-", 10);
		/*gotoXY(Missile::X, Missile::Y);
		cout << "**|==-";*/

		/*gotoXY(Missile::X, Missile::Y);
		cout << "      ";*/
		enemymanage();
		itemmanage();
		score += 100;
		printinfo();
		Me::Meprint();
	}
}

void Mecollision()
{
	if (((Me::X == enemy1::X) || (Me::X + 1 == enemy1::X) || (Me::X + 2 == enemy1::X)) && Me::Y + 1 == enemy1::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy1::enemy1erase();
		enemy1::X = 80;
		enemy1::Y = -1;
		return;				//한꺼번에 너무 많은 충돌로 인한 체력 급감을 피하기 위함.
	}
	if (Me::X + 3 == enemy1::X && Me::Y + 1 == enemy1::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy1::enemy1erase();
		enemy1::X = 80;
		enemy1::Y = -1;
		return;
	}
	if (Me::X + 4 == enemy1::X && Me::Y + 1 == enemy1::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy1::enemy1erase();
		enemy1::X = 80;
		enemy1::Y = -1;
		return;
	}
	if (((Me::X == enemy2::X) || (Me::X + 1 == enemy2::X) || (Me::X + 2 == enemy2::X)) && Me::Y + 1 == enemy2::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy2::enemy2erase();
		enemy2::X = 80;
		enemy2::Y = -1;
		return;
	}
	if (Me::X + 3 == enemy2::X && Me::Y + 1 == enemy2::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy2::enemy2erase();
		enemy2::X = 80;
		enemy2::Y = -1;
		return;
	}
	if (Me::X + 4 == enemy2::X && Me::Y + 1 == enemy2::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy2::enemy2erase();
		enemy2::X = 80;
		enemy2::Y = -1;
		return;
	}
	if (((Me::X == enemy3::X) || (Me::X + 1 == enemy3::X) || (Me::X + 2 == enemy3::X)) && Me::Y + 1 == enemy3::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy3::enemy3erase();
		enemy3::X = 80;
		enemy3::Y = -1;
		return;
	}
	if (Me::X + 3 == enemy3::X && Me::Y + 1 == enemy3::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy3::enemy3erase();
		enemy3::X = 80;
		enemy3::Y = -1;
		return;
	}
	if (Me::X + 4 == enemy3::X && Me::Y + 1 == enemy3::Y)
	{
		Me::Life--;
		printinfo();
		for (int i = 0; i<4; i++)
		{
			Me::Meprint();
			Sleep(50);
			Me::Meerase();
			Sleep(50);
		}
		enemy3::enemy3erase();
		enemy3::X = 80;
		enemy3::Y = -1;
		return;
	}

	//printXY(0, 0, Me::Life, 5); ///////이상함!!!!
	/*gotoXY(0, 0);
	cout << Me::Life;*/
}

void enemymanage()		//적 관리
{
	if (enemy1::X != 80)			//적1이 화면에 진행되는 동안
	{
		enemy1::enemy1erase();
		enemy1::X--;
		enemy1::enemy1print();
	}
	else                       //적1이 초기화 상태인 경우
	{
		mid = clock() - start;
		if (mid > rand() % 2000 + 10000) enemy1::enemy1appear();
	}
	if (enemy2::X != 80)			//적2가 화면에 진행되는 동안
	{
		enemy2::enemy2erase();
		enemy2::X--;
		//enemy2::enemy2pattern();
		enemy2::enemy2print();
	}
	else                       //적2가 초기화 상태인 경우
	{
		mid = clock() - start;
		if (mid > rand() % 2000 + 50000) enemy2::enemy2appear();
	}
	if (enemy3::X != 80)			//적3이 화면에 진행되는 동안
	{
		enemy3::enemy3erase();
		enemy3::X--;
		//enemy3::enemy3pattern();
		enemy3::enemy3print();
	}
	else                        //적3이 초기화 상태인 경우
	{
		mid = clock() - start;
		if (mid > rand() % 2000 + 1000) enemy3::enemy3appear();
	}

	if (enemy1::X == 0 || enemy1::Y == 18)			//적1이 끝에 도착하면 초기화 정리
	{
		enemy1::enemy1erase();
		enemy1::X = 80;
		enemy1::Y = -1;
	}
	if (enemy2::X == 0 || enemy2::Y == 18)			//적2가 끝에 도착하면 초기화 정리
	{
		enemy2::enemy2erase();
		enemy2::X = 80;
		enemy2::Y = -1;
	}
	if (enemy3::X == 0 || enemy3::Y == 18)			//적3이 끝에 도착하면 초기화 정리
	{
		enemy3::enemy3erase();
		enemy3::X = 80;
		enemy3::Y = -1;
	}
}

void printinfo()
{
	int x = 12;
	printXY(4, 24, "                  ", 12);
	printXY(4, 24, "LIFE : ", 12);
	for (int i = 0; i<Me::Life; i++)
	{
		printXY(x, 24, "♥", 12);
		x += 2;
	}
	char c[4] = { 0, };
	_itoa_s(Me::missilenum, c, 10);
	printXY(28, 24, "              ", 9);
	printXY(28, 24, "Missile : ", 9);
	printXY(38, 24, c, 9);

	char s[20] = { 0, };
	_itoa_s(score, s, 10);
	printXY(46, 24, "                        ", 11);
	printXY(46, 24, "score : ", 11);
	printXY(58, 24, s, 11);
}

void printscore()
{
	char s[20] = { 0, };
	_itoa_s(score, s, 10);
	printXY(46, 24, "                        ", 11);
	printXY(46, 24, "score : ", 11);
	printXY(58, 24, s, 11);
}

void itemcollision()	//아이템 먹는 것을 검사
{
	if (((boosteritem::X >= Me::X) && (boosteritem::X <= Me::X + 4)) && ((boosteritem::Y >= Me::Y) && (boosteritem::Y <= Me::Y + 2)))
	{
		if (speed > 6) speed--;
		boosteritem::X = 78;
		boosteritem::Y = -1;
	}
	if (((missileitem::X >= Me::X) && (missileitem::X <= Me::X + 4)) && ((missileitem::Y >= Me::Y) && (missileitem::Y <= Me::Y + 2)))
	{
		Me::missilenum++;
		missileitem::itemerase();
		missileitem::X = 78;
		missileitem::Y = -1;
		printinfo();
	}
	if (((hpitem::X >= Me::X) && (hpitem::X <= Me::X + 4)) && ((hpitem::Y >= Me::Y) && (hpitem::Y <= Me::Y + 2)))
	{
		if (Me::Life<5) Me::Life++;
		hpitem::itemerase();
		hpitem::X = 78;
		hpitem::Y = -1;
		printinfo();
	}
	Sleep(speed);
	score += 1;
}



void exeGameAction()	//명령수행
{
	int ch, gameaction = 0;
	Mecollision();
	itemcollision();
	if (_kbhit())
	{
		ch = getGameAction(gameaction);
		if (ch == MOVE_UP)
		{
			Me::Meerase();
			Me::Y--;
			if (Me::Y == -1) Me::Y = 0;
			Me::Meprint();
		}
		else if (ch == MOVE_DOWN)
		{
			Me::Meerase();
			Me::Y++;
			if (Me::Y == 22) Me::Y = 21;
			Me::Meprint();
		}
		else if (ch == MOVE_LEFT)
		{
			Me::Meerase();
			Me::X--;
			if (Me::X == -1) Me::X = 0;
			Me::Meprint();
		}
		if (ch == MOVE_RIGHT)
		{
			Me::Meerase();
			Me::X++;
			if (Me::X == 72) Me::X = 70;
			Me::Meprint();
		}
		else if (ch == GAME_QUIT)
		{
			
			system("cls");
			stopstar = 1;
			printXY(33, 11, "PLANET RUN", 13);
			printXY(28, 13, "Thank You For Playing!", 15);
			printXY(28, 15, "", 15);
			exit(0);

		}
		else if (ch == MISSILE)
		{
			if (Me::missilenum > 0)
			{
				if (Missile::count == 0)
				{
					Me::missilenum--;
					printinfo();
					missilecollision();		//미사일 이벤트
				}
			}
		}
	}
}

int Me::X = 5;
int Me::Y = 6;
int Me::missilenum = 20;
int Missile::X = 0;
int Missile::Y = 0;
int Missile::count = 0;
int Me::Life = 5;
int enemy1::X = 80;
int enemy1::Y = -1;
int enemy2::X = 80;
int enemy2::Y = -1;
int enemy3::X = 80;
int enemy3::Y = -1;
int enemy1::rotationwidth = 2;
int enemy2::rotationwidth = 2;
int enemy3::rotationwidth = 2;
int enemy1::go = 0;
int enemy2::go = 0;
int enemy3::go = 0;
int missileitem::X = 78;
int missileitem::Y = -1;
int boosteritem::X = 78;
int boosteritem::Y = -1;
int hpitem::X = 78;
int hpitem::Y = -1;

Missile::Missile()		//미사일을 쏠때
{
	Missile::count++;
	Missile::X = Me::X + 8;
	Missile::Y = Me::Y + 1;
}

Missile::~Missile()		//미사일 이벤트가 끝나면
{
	Missile::count--;
}

/*void enemy1::enemy1pattern()
{
if (go % rotationwidth == 0) Y--;
else Y++;
go++;
}

void enemy2::enemy2pattern()
{
if (go % rotationwidth == 0) Y--;
else Y++;
go++;
}

void enemy3::enemy3pattern()
{
if (go % rotationwidth == 0) Y--;
else Y++;
go++;
}*/

void enemy1::enemy1appear()
{
	enemy1::Y = rand() % 18 + 2;
	enemy1::X = 78;

	printXY(enemy1::X, enemy1::Y, "◀", 15);
	/*gotoXY(enemy1::X, enemy1::Y);
	cout << "◀";*/
	enemy1::X = 76;

	printXY(enemy1::X, enemy1::Y, "◀■", 15);
	/*gotoXY(enemy1::X, enemy1::Y);
	cout << "◀■";*/
	enemy1::X = 72;
}

void enemy1::enemy1print()
{
	printXY(X, Y, "◀■〓3", 15);
	/*gotoXY(X, Y);
	cout << "◀■〓3";*/
}

void enemy1::enemy1erase()
{
	printXY(X, Y, "        ", 15);
	/*gotoXY(X, Y);
	cout << "        ";*/
}

void enemy2::enemy2appear()
{
	enemy2::Y = rand() % 18 + 2;
	enemy2::X = 78;

	printXY(enemy2::X, enemy2::Y, "◀", 15);
	/*gotoXY(enemy2::X, enemy2::Y);
	cout << "◀";*/
	enemy2::X = 76;

	printXY(enemy2::X, enemy2::Y, "◀■", 15);
	/*gotoXY(enemy2::X, enemy2::Y);
	cout << "◀■";*/
	enemy2::X = 72;
}

void enemy2::enemy2print()
{
	printXY(X, Y, "◀■〓3", 15);
	/*gotoXY(X, Y);
	cout << "◀■〓3";*/
}

void enemy2::enemy2erase()
{
	printXY(X, Y, "        ", 15);
	/*gotoXY(X, Y);
	cout << "        ";*/
}

void enemy3::enemy3appear()
{
	enemy3::Y = rand() % 18 + 2;
	enemy3::X = 78;

	printXY(enemy3::X, enemy3::Y, "◀", 15);
	/*gotoXY(enemy3::X, enemy3::Y);
	cout << "◀";*/
	enemy3::X = 76;

	printXY(enemy3::X, enemy3::Y, "◀■", 15);
	/*gotoXY(enemy3::X, enemy3::Y);
	cout << "◀■";*/
	enemy3::X = 72;
}

void enemy3::enemy3print()
{
	printXY(X, Y, "◀■〓3", 15);
	/*gotoXY(X, Y);
	cout << "◀■〓3";*/
}

void enemy3::enemy3erase()
{
	printXY(X, Y, "        ", 15);
	/*gotoXY(X, Y);
	cout << "        ";*/
}

void missileitem::missileitemappear()
{
	X = 78;
	Y = rand() % 18 + 2;
	printXY(X, Y, "M", 11);
	X = 77;
}

void missileitem::itemprint()
{
	printXY(X, Y, "M", 11);
}

void missileitem::itemerase()
{
	printXY(X, Y, "  ", 11);
}

void boosteritem::boosteritemappear()
{
	X = 78;
	Y = rand() % 18 + 2;
	printXY(X, Y, "B", 13);
	X = 77;
}

void boosteritem::itemprint()
{
	printXY(X, Y, "B", 13);
}

void boosteritem::itemerase()
{
	printXY(X, Y, "  ", 11);
}

void hpitem::hpitemappear()
{
	X = 78;
	Y = rand() % 18 + 2;
	printXY(X, Y, "H", 12);
	X = 77;
}

void hpitem::itemprint()
{
	printXY(X, Y, "H", 12);
}

void hpitem::itemerase()
{
	printXY(X, Y, "  ", 11);
}

void itemmanage()
{
	int r = 0;
	mid2 = clock() - start;
	/*if(mid2 >= 200000)
	{
	r = rand()%10+1;
	switch(r)
	{
	case 1: boosteritem::boosteritemappear();
	case 2: missileitem::missileitemappear();
	break;
	case 3: hpitem::hpitemappear();
	break;
	case 4: boosteritem::boosteritemappear();
	break;
	default: break;
	}
	}*/
	if (boosteritem::X != 78)
	{
		boosteritem::itemerase();
		boosteritem::X--;
		boosteritem::itemprint();
	}
	else
	{
		if (mid2 >= 5000)
		{
			r = rand() % 30;
			switch (r)
			{
			case 1: boosteritem::boosteritemappear();
				break;
			default:break;
			}
		}
	}
	if (missileitem::X != 78)
	{
		missileitem::itemerase();
		missileitem::X--;
		missileitem::itemprint();
	}
	else
	{
		if (mid2 >= 5000)
		{
			r = rand() % 30;
			switch (r)
			{
			case 1: missileitem::missileitemappear();
				break;
			default:break;
			}
		}
	}
	if (hpitem::X != 78)
	{
		hpitem::itemerase();
		hpitem::X--;
		hpitem::itemprint();
	}
	else
	{
		if (mid2 >= 5000)
		{
			r = rand() % 35;
			switch (r)
			{
			case 1: hpitem::hpitemappear();
				break;
			default:break;
			}
		}
	}
	if (boosteritem::X <= 0)
	{
		boosteritem::itemerase();
		boosteritem::X = 78;
		boosteritem::Y = -1;
	}
	if (missileitem::X <= 0)
	{
		missileitem::itemerase();
		missileitem::X = 78;
		missileitem::Y = -1;
	}
	if (hpitem::X <= 0)
	{
		hpitem::itemerase();
		hpitem::X = 78;
		hpitem::Y = -1;
	}
}

