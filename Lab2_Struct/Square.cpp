#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"


Square initSquare(int a)
{
	Square square1;
	square1.length.storona = a;
	return square1;

}

Square setSquare(Square square1)
{
	printf(" Введите сторону:");
	scanf("%d", &square1.length.storona);
	return square1;
}

int areaSquare(Square square1)
{
	int area;
	area = square1.length.storona * square1.length.storona;
	return area;
}

void printSquare(Square square1)
{
	printf("\n Сторона - %d", square1.length.storona);
	printf("\n Площадь - %d\n", areaSquare(square1));
}
