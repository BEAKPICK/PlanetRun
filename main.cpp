#include "play.h"
#include "sound.h"
#include <fstream>
#include <iomanip>
#include <cstdlib>

clock_t start = 0, mid = 0, mid2 = 0;
int speed = 20;
int score = 0;
int stopstar = 0;

void menu();
void star();

DWORD WINAPI func1(LPVOID arg)
{
	star();
	return 0;
}

DWORD WINAPI func2(LPVOID arg)
{
	srand(time(0));
	start = clock();

	Me me;
	enemy1::enemy1appear();
	enemy2::enemy2appear();
	enemy3::enemy3appear();
	printinfo();
	while (1)
	{
		enemymanage();
		itemmanage();
		exeGameAction();
		if (Me::Life <= 0)
		{

			score -= 1;

			system("cls");
			printXY(2, 3,"旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬",15);
			printXY(2,4,"早  ﹥﹥﹥ ﹥       ﹥   ﹥    ﹥ ﹥﹥﹥ ﹥﹥﹥                           早",15);
			printXY(52,4,"〡〡〡 〡  〡 〡    〡  ",15);
			
			printXY(2,5,"早  ﹥  ﹥ ﹥     ﹥﹥﹥ ﹥﹥  ﹥ ﹥       ﹥                             早 ",15);
			
			printXY(52,5,"〡  〡 〡  〡 〡〡  〡  ",15);
			
			printXY(2,6,"早  ﹥﹥﹥ ﹥     ﹥  ﹥ ﹥ ﹥ ﹥ ﹥﹥﹥   ﹥                             早",15);
			
			printXY(52,6,"〡〡   〡  〡 〡 〡 〡  ",15);
			
			printXY(2,7,"早  ﹥     ﹥     ﹥﹥﹥ ﹥  ﹥﹥ ﹥       ﹥                             早",15);
			
			printXY(52,7,"〡  〡 〡  〡 〡  〡〡  ",15);
			
			printXY(2,8,"早  ﹥     ﹥﹥﹥ ﹥  ﹥ ﹥    ﹥ ﹥﹥﹥   ﹥                             早",15);
			
			printXY(52,8,"〡  〡 〡〡〡 〡    〡  ",15);
			printXY(2,9,"曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭",15);

			printXY(28, 13, "Thank You For Playing!",15);
			
			printXY(28, 12, "Your score ",15);

			
			char c[10] = { 0, };
			_itoa_s(score, c, 10);
			printXY(42, 12,c,15);

			ifstream ffin;
			ofstream ffout;
			ffin.open("Ranking.txt");
			char rscore[10];
			int iscore[10] = { 0, };
			int ascore[10] = { 0, };
			int i = 0;
			for (int h = 0; h<10; h++)
			{
				ffin.getline(rscore, sizeof(rscore));
				iscore[i] = atoi(rscore);
				i++;
			}
			i = 0;
			stopstar = 1;
			while (1)
			{
				if (score >= iscore[i])
				{
					for (int h = i; h<9; h++)
					{
						ascore[h + 1] = iscore[h];
					}
					for (int h = i; h<9; h++)
					{
						iscore[h + 1] = ascore[h + 1];
					}
					iscore[i] = score;
					break;
				}
				else
				{
					i++;
				}
				if (i == 10) break;
			}
			ffin.close();
			ffout.open("Ranking.txt");
			for (int i = 0; i<10; i++)
			{
				ffout << iscore[i] << endl;
			}
			ffout.close();
			break;
		}
		Me::Meprint();
		printscore();
	}
	return 0;
}



int main()
{
	HANDLE hthread[1];

	Sound::menuBGM();
	
	
		menu();

	Sound::playBGM();
	hthread[0] = CreateThread(NULL, 0, func1, NULL, 0, NULL);
	hthread[1] = CreateThread(NULL, 0, func2, NULL, 0, NULL);

	WaitForSingleObject(hthread[0], INFINITE);
	WaitForSingleObject(hthread[1], INFINITE);
}