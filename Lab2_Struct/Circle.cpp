#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include <stdio.h>
#include<math.h>
#define PI 3.14

�ircle init�ircle(int value_radius)
{
	�ircle circle1;
	circle1.radius = value_radius;
	return circle1;
}
�ircle set�ircle(�ircle circle1)
{
	printf(" ������� ������:");
	scanf("%d", &circle1.radius);
	return circle1;
}
float area�ircle(�ircle circle1)
{
	return PI * circle1.radius* circle1.radius;
}
void print�ircle(�ircle circle1)
{
	printf("\n ������ - %d", circle1.radius);
	printf("\n ������� - %.2f\n", area�ircle(circle1));
}


