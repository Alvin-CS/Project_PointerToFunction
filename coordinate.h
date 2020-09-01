#include<stdio.h>

typedef struct __Coord_InitTypeDef {
	int x;
	int y;
	int sum;
	int difference;
	void (*X_Operate_Y)(void);
}Coord_InitTypeDef;

typedef struct __Coord_Handle{
	Coord_InitTypeDef Init;


}Coord_Handle;

extern Coord_Handle hcord;

void Init_Coord(void);

void X_Plus_Y(void);
void X_Minus_Y(void);
