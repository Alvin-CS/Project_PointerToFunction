#include<stdio.h>
#include"coordinate.h"

int main()
{
	Init_Coord();
	hcord.Init.X_Operate_Y();
	printf_s("sum = %d\n", hcord.Init.sum);
	return 0;
}