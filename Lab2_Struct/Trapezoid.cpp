#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid initTrapezoid(int a, int b, int c)
{
	Trapezoid trapezoid1;
	trapezoid1.length.osnovanie[0] = a;
	trapezoid1.length.osnovanie[1] = b;
	trapezoid1.length.height[0] = c;
	return trapezoid1;
}
Trapezoid setTrapezoid(Trapezoid trapezoid1)
{
	printf(" Введите Нижнее Основание:");
	scanf("%d", &trapezoid1.length.osnovanie[0]);
	printf(" Введите Верхнее Основание:");
	scanf("%d", &trapezoid1.length.osnovanie[1]);
	printf(" Введите Высоту:");
	scanf("%d", &trapezoid1.length.height[0]);

	return trapezoid1;
}
float areaTrapezoid(Trapezoid trapezoid1)
{
	float area;
	area = 0.5 * (trapezoid1.length.osnovanie[0] + trapezoid1.length.osnovanie[1]) * trapezoid1.length.height[0];
	return area;
}
void printTrapezoid(Trapezoid trapezoid1)
{
	printf("\n  Нижнее Основание - %d", trapezoid1.length.osnovanie[0]);
	printf("\n  Верхнее Основание - %d", trapezoid1.length.osnovanie[1]);
	printf("\n  Высота - %d", trapezoid1.length.height[0]);
	printf("\n Площадь - %.2f\n", areaTrapezoid(trapezoid1));
}

