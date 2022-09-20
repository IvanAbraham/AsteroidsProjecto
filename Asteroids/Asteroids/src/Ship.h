#pragma once
#include "Proyectile.h"

struct Ship
{

	float rateoffire;
	float length;
	float width;
	float speed;
	float posy;
	float posx;
	Vector2 position;
	Vector2 size;

};

void CreatePlayerShip(int swidth, int sheight);

