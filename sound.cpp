#include "sound.h"

#define PLAY "Showdown.wav"
#define MENU "Victory.wav"

#define _C 1046.502
#define _D 1108.731
#define _E 1318.510
#define _F 1396.913
#define _G 1567.982
#define _A 1760.000
#define _B 1975.533

void Sound::playBGM()
{
	PlaySound(TEXT(PLAY), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void Sound::menuBGM()
{
	PlaySound(TEXT(MENU), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}


void Sound::stopBGM()
{
	PlaySound(NULL, NULL, NULL);
}


void Sound::effect()
{
	Beep(_C, 100);
	Beep(_D, 100);
	Beep(_E, 100);
	Beep(_F, 100);
	Beep(_G, 100);
	Beep(_A, 100);
	Beep(_B, 100);
}