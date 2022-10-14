#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Triangle.h"


Triangle initTriangle(int a,int b)
{
	Triangle triangle1;
	triangle1.length.storona[0] = a;
	triangle1.length.height[0] = b;
	return triangle1;

}

Triangle setTriangle(Triangle triangle1)
{
	printf(" Введите сторону:");
	scanf("%d", &triangle1.length.storona[0]);
	printf(" Введите Высоту:");
	scanf("%d", &triangle1.length.height[0]);

	return triangle1;
}

float  areaTriangle(Triangle triangle1)
{
	float  area;
	area = 0.5 * triangle1.length.storona[0] * triangle1.length.height[0];
	return area;
}

void printTriangle(Triangle triangle1)
{
	printf("\n Сторона - %d", triangle1.length.storona[0]);
	printf("\n Высота - %d", triangle1.length.height[0]);
	printf("\n Площадь - %.2f\n", areaTriangle(triangle1));
}
