#include"control.h"
#define _F 1396.913
#include <fstream>
#include <iomanip>

void menu();
void title()
{
	int color;

	gotoXY(2, 3);
	printf("����������������������������������������������������������������������������");
	Sleep(80);
	gotoXY(2, 4);
	printf("��  ���   ��       ��   ��    �� ���� ����                           ��");
	gotoXY(52, 4);
	SetColor(0x0003);
	printf("�ââ� ��  �� ��    ��  ");
	SetColor(0x0007);
	Sleep(80);
	gotoXY(2, 5);
	printf("��  ��  �� ��     ���� ���  �� ��       ��                             �� ");
	gotoXY(52, 5);
	SetColor(0x0003);
	printf("��  �� ��  �� �â�  ��  ");
	SetColor(0x0007);
	Sleep(80);
	gotoXY(2, 6);
	printf("��  ���   ��     ��  �� �� �� �� ����   ��                             ��");
	gotoXY(52, 6);
	SetColor(0x0003);
	printf("�â�   ��  �� �� �� ��  ");
	SetColor(0x0007);
	Sleep(80);
	gotoXY(2, 7);
	printf("��  ��     ��     ���� ��  ��� ��       ��                             ��");
	gotoXY(52, 7);
	SetColor(0x0003);
	printf("��  �� ��  �� ��  �â�  ");
	SetColor(0x0007);
	Sleep(80);
	gotoXY(2, 8);
	printf("��  ��     ���� ��  �� ��    �� ����   ��                             ��");
	gotoXY(52, 8);
	SetColor(0x0003);
	printf("��  �� �ââ� ��    ��  ");
	SetColor(0x0007);
	Sleep(80);
	gotoXY(2, 9);
	printf("����������������������������������������������������������������������������");


	gotoXY(4, 15); printf("������<                    >������");
	SetColor(0x000E);
	gotoXY(11, 15); printf("  Key Instructions  ");
	SetColor(0x0007);
	gotoXY(4, 16); printf("��            PLAYER            ��");
	gotoXY(4, 17); printf("��        UP         ��         ��");
	gotoXY(4, 18); printf("��        RIGHT      ��         ��");
	gotoXY(4, 19); printf("��        LEFT       ��         ��");
	gotoXY(4, 20); printf("��        DOWN       ��         ��");
	gotoXY(4, 21); printf("��        ATTACK    SPACE       ��");
	gotoXY(4, 22); printf("����������������������������������");

	SetColor(0x000E);
	gotoXY(50, 16); printf("1. Game Start");
	SetColor(0x000F);
	gotoXY(50, 18); printf("2. Ranking");
	gotoXY(50, 20); printf("3. Game Quit");
	gotoXY(47, 16); printf("��");
	
}
void menu()
{
		int menucnt = 0;
		int ch, click = 0;
		int color;

		title();

		while (1)
		{

			if (menucnt >= 0)
			{
				srand((unsigned int)time(NULL));
				color = rand() % 15 + 1;
				SetColor(color);

				gotoXY(6, 4);
				printf("���� ��       ��   ��    �� ���� ����  ");
				gotoXY(6, 5);
				printf("��  �� ��     ���� ���  �� ��       ��    ");
				gotoXY(6, 6);
				printf("���� ��     ��  �� �� �� �� ����   ��    ");
				gotoXY(6, 7);
				printf("��     ��     ���� ��  ��� ��       ��    ");
				gotoXY(6, 8);
				printf("��     ���� ��  �� ��    �� ����   ��    ");

				SetColor(0x0007);
				Sleep(500);

			}

			gotoXY(48, 16);

			if (_kbhit())
			{
				ch = getGameAction(click);

				if (ch == MOVE_DOWN)
				{
					Beep(_F, 100);
					gotoXY(47, 16 + (2 * menucnt));
					printf("  ");

					menucnt++;

					if (menucnt >= 3)
						menucnt = 0;

					gotoXY(47, 16 + (2 * menucnt));
					printf("��");
				}

				if (ch == MOVE_UP)
				{
					Beep(_F, 100);
					gotoXY(47, 16 + (2 * menucnt));
					printf("  ");

					menucnt--;

					if (menucnt < 0)
						menucnt = 2;

					gotoXY(47, 16 + (2 * menucnt));
					printf("��");
				}

				if (menucnt == 0)
				{
					SetColor(0x000E);
					gotoXY(50, 16); printf("1. Game Start");
					SetColor(0x000F);
					gotoXY(50, 18); printf("2. Ranking");
					gotoXY(50, 20); printf("3. Game Quit");

					if (ch == MOVE_ENTER)
					{
						system("cls");
						break;
					}
				}

				if (menucnt == 1)
				{
					SetColor(0x000E);
					gotoXY(50, 18); printf("2. Ranking");
					SetColor(0x000F);
					gotoXY(50, 16); printf("1. Game Start");
					gotoXY(50, 20); printf("3. Game Quit");
				}

				if (menucnt == 2)
				{
					SetColor(0x000E);
					gotoXY(50, 20); printf("3. Game Quit");
					SetColor(0x000F);
					gotoXY(50, 16); printf("1. Game Start");
					gotoXY(50, 18); printf("2. Ranking");

					if (ch == MOVE_ENTER)
					{
						system("cls");

						gotoXY(2, 3);
						printf("����������������������������������������������������������������������������");
						gotoXY(2, 4);
						printf("��  ���� ��       ��   ��    �� ���� ����                           ��");
						gotoXY(52, 4);
						printf("�ââ� ��  �� ��    ��  ");
						gotoXY(2, 5);
						printf("��  ��  �� ��     ���� ���  �� ��       ��                             �� ");
						gotoXY(52, 5);
						printf("��  �� ��  �� �â�  ��  ");
						gotoXY(2, 6);
						printf("��  ���� ��     ��  �� �� �� �� ����   ��                             ��");
						gotoXY(52, 6);
						printf("�â�   ��  �� �� �� ��  ");
						gotoXY(2, 7);
						printf("��  ��     ��     ���� ��  ��� ��       ��                             ��");
						gotoXY(52, 7);
						printf("��  �� ��  �� ��  �â�  ");
						gotoXY(2, 8);
						printf("��  ��     ���� ��  �� ��    �� ����   ��                             ��");
						gotoXY(52, 8);
						printf("��  �� �ââ� ��    ��  ");
						gotoXY(2, 9);
						printf("����������������������������������������������������������������������������");

						gotoXY(28, 12);
						cout << "Thank You For Playing!";
						gotoXY(0, 23);
						exit(0);
					}

				}

				if (menucnt == 1)
				{
					if (ch == MOVE_ENTER)
					{
						system("cls");
						int rank = 1;
						char line[80];
						ifstream fin;
						fin.open("Ranking.txt");
						SetColor(15);
						cout << " *****************************";
						SetColor(13);
						gotoXY(31, 0);
						cout << "Planet Run Ranking";
						SetColor(15);
						gotoXY(50, 0);
						cout << "***************************** \n\n";
						while (fin.getline(line, sizeof(line)))
						{
							cout << setw(31) << "" << setw(2) << rank << "     " << setw(9) << line << " ��" << endl;
							cout << endl;
							rank++;
						}
						fin.close();
						gotoXY(30, 23);
						SetColor(11);
						cout << "press ESC key to back";
						while (1)
						{
							ch = getGameAction(click);
							if (ch == GAME_QUIT)
								break;
						}
						system("cls");
						menucnt = 0;
						title();
					}
				}
			}
		}
}
	