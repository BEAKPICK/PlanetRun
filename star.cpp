#include"control.h"
#include"stopstar.h"
void star()
{
	int X[10], Y[10], C[10];
	int i;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 10; i++)
	{
		X[i] = 78 + i * 8;
		Y[i] = rand() % 24;
		C[i] = rand() % 15 + 1;
	}

	while (1)
	{
		for (i = 0; i < 10; i++)
		{
			if (X[i] < 79)
			{
				printXY(X[i], Y[i], "*    ", C[i]);
				/*gotoXY(X[i], Y[i]);
				SetColor(C[i]);
				cout << "*    ";*/

			}
			if (i % 2 == 0)
				X[i]--;
			else if (i % 3 == 0)
				X[i] -= 2;
			else
				X[i] -= 3;

			if (X[i] < 0)
			{
				printXY(0, Y[i], "   ", C[i]);
				/*gotoXY(0, Y[i]);
				cout << "   ";*/
				X[i] = 79;
				Y[i] = rand() % 24;
				C[i] = rand() % 15 + 1;
			}
		}
		Sleep(20);
		if (stopstar == 1)
		{
			printXY(33, 20,"",15);
			exit(0);
		}
	}
	/*
	::LeaveCriticalSection(&m_cs);
	::DeleteCriticalSection(&m_cs);
	*/
}