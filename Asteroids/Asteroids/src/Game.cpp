#include "raylib.h"
#include "Ship.h"

void InitWindow(int Width, int Height)
{

	InitWindow(Width, Height, "Asteroids");

}


void StartGame()
{

	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight);

	CreatePlayerShip( screenWidth, screenHeight );

	while (!WindowShouldClose())
	{

		BeginDrawing();

	}

}