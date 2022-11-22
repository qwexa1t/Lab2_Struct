#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid initTrapezoid(int value_lower_base, int value_upper_base, int value_height)
{
	Trapezoid trapezoid1;
	trapezoid1.lower_base = value_lower_base;
	trapezoid1.upper_base = value_upper_base;
	trapezoid1.height = value_height;
	return trapezoid1;
}

Trapezoid setTrapezoid(Trapezoid trapezoid1)
{
	printf(" ������� ������ ���������:");
	scanf("%d", &trapezoid1.lower_base);
	printf(" ������� ������� ���������:");
	scanf("%d", &trapezoid1.upper_base);
	printf(" ������� ������:");
	scanf("%d", &trapezoid1.height);
	return trapezoid1;
}

float areaTrapezoid(Trapezoid trapezoid1)
{
	return 0.5 * (trapezoid1.lower_base + trapezoid1.upper_base) * trapezoid1.height;
}

void printTrapezoid(Trapezoid trapezoid1)
{
	printf("\n  ������ ��������� - %d", trapezoid1.lower_base);
	printf("\n  ������� ��������� - %d", trapezoid1.upper_base);
	printf("\n  ������ - %d", trapezoid1.height);
	printf("\n ������� - %.2f\n", areaTrapezoid(trapezoid1));
}

