#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectang.h"

Rectang initRectang(int value_length,int value_width)
{
	Rectang rectang1;
	rectang1.length = value_length;
	rectang1.width = value_width;
	return rectang1;
}

Rectang setRectang(Rectang rectang1)
{
	printf(" Введите Длину:");
	scanf("%d", &rectang1.length);
	printf(" Введите Ширину:");
	scanf("%d", &rectang1.width);
	return rectang1;
}

int areaRectang(Rectang rectang1)
{
	return rectang1.length * rectang1.width;
}

void printRectang(Rectang rectang1)
{
	printf("\n Длина прямоугольника - %d", rectang1.length);
	printf("\n Ширина прямоугольника - %d", rectang1.width);
	printf("\n Площадь - %d\n", areaRectang(rectang1));
}
