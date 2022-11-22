#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"

Square initSquare(int value_side)
{
	Square square1;
	square1.side = value_side;
	return square1;
}

Square setSquare(Square square1)
{
	printf(" Введите сторону:");
	scanf("%d", &square1.side);
	return square1;
}

int areaSquare(Square square1)
{
	return square1.side * square1.side;
}

void printSquare(Square square1)
{
	printf("\n Сторона - %d", square1.side);
	printf("\n Площадь - %d\n", areaSquare(square1));
}
