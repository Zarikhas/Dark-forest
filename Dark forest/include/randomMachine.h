#pragma once
#ifndef RAND_MACHINE
#define RAND_MACHINE
#include<SDL.h>
#include<random>
std::random_device rd;
std::mt19937 mt(rd());

std::uniform_int_distribution<> curse_creation(1, 1024);
bool skull_creation() {
	Uint16 curse = curse_creation(mt);
	if((curse & 511) == 0) return true;
	return false;
}
bool reaper_creation() {
	Uint16 curse = curse_creation(mt);
	if(curse == 1024) return true;
	return false;
}

std::uniform_int_distribution<> sound_play(1, 128);
#endif // !RAND_MACHINE