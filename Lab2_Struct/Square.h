#pragma once
#include "Otrezok.h"

struct Square
{
	char color[20];
	Otrezok length;

};

//��������� �������
Square initSquare(int a);
Square setSquare(Square square1);
int areaSquare(Square square1);
void printSquare(Square square1);


