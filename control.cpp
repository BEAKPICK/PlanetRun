#include"control.h"

#include <thread>
#include <mutex>
#include <chrono>

std::mutex m;
//using namespace std::literals;

void gotoXY(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int getGameAction(int action)//키입력->명령
{
	int keyValue, act = action;
	if (_kbhit() != 0)
	{
		keyValue = _getch();
		if (keyValue == 224)
		{
			keyValue = _getch();
		}
		switch (keyValue)
		{
		case ESC:
			act = GAME_QUIT;
			break;
		case LEFT:
			act = MOVE_LEFT;
			break;
		case RIGHT:
			act = MOVE_RIGHT;
			break;
		case DOWN:
			act = MOVE_DOWN;
			break;
		case UP:
			act = MOVE_UP;
			break;
		case SPACE:
			act = MISSILE;
			break;
		case ENTER:
			act = MOVE_ENTER;
		default:
			break;
		}
	}
	return act;
}


void printXY(int x, int y, const char* str, int color) {
	m.lock();
	gotoXY(x, y);
	SetColor(color);
	cout << str;
	m.unlock();

}