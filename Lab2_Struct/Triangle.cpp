#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Triangle.h"

Triangle initTriangle(int value_side,int value_height)
{
	Triangle triangle1;
	triangle1.side = value_side;
	triangle1.height = value_height;
	return triangle1;
}

Triangle setTriangle(Triangle triangle1)
{
	printf(" Введите сторону:");
	scanf("%d", &triangle1.side);
	printf(" Введите Высоту:");
	scanf("%d", &triangle1.height);
	return triangle1;
}

float  areaTriangle(Triangle triangle1)
{
	return 0.5 * triangle1.side * triangle1.height;
}

void printTriangle(Triangle triangle1)
{
	printf("\n Сторона - %d", triangle1.side);
	printf("\n Высота - %d", triangle1.height);
	printf("\n Площадь - %.2f\n", areaTriangle(triangle1));
}
