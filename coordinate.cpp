#include"coordinate.h"

Coord_Handle hcord;

void Init_Coord(void)
{
	hcord.Init.x = 1;
	hcord.Init.y = 2;
	hcord.Init.sum = 0;
	hcord.Init.X_Operate_Y = X_Plus_Y;

}

void X_Plus_Y(void)
{
	hcord.Init.sum = hcord.Init.x + hcord.Init.y;
}