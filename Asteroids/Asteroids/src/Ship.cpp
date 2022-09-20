#include "Ship.h"

void CreatePlayerShip(int swidth, int sheight)
{

	Ship player;

	player.width = swidth / 20.0f;

	player.length = sheight / 20.0f;

	player.size = { player.width, player.length };

	player.posx = swidth / 2.0f;

	player.posy = sheight / 2.0f;

	player.rateoffire = 5.0f;

	player.speed = 15.0f;

	player.position = { player.posx, player.posy };

}