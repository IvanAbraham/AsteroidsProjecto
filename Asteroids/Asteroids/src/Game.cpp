#include "raylib.h"
#include "Ship.h"

void StartGame()
{

	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "Asteroids");

	CreatePlayerShip( screenWidth, screenHeight );

	while (!WindowShouldClose())
	{		

		BeginDrawing();
		
		ClearBackground(BLACK);

		DrawShip(player.position, player.size);

		EndDrawing();

	}

	CloseWindow();

}