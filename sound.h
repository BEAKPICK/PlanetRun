#ifndef SOUND_H
#define SOUND_H
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

class Sound {
public:
	static void playBGM();
	static void menuBGM();
	static void stopBGM();
	void effect();
};


#endif
