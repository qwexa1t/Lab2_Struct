#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include <stdio.h>
#include<math.h>
#define PI 3.14

Ñircle initÑircle(int value_radius)
{
	Ñircle circle1;
	circle1.radius = value_radius;
	return circle1;
}
Ñircle setÑircle(Ñircle circle1)
{
	printf(" Ââåäèòå Ğàäèóñ:");
	scanf("%d", &circle1.radius);
	return circle1;
}
float areaÑircle(Ñircle circle1)
{
	return PI * circle1.radius* circle1.radius;
}
void printÑircle(Ñircle circle1)
{
	printf("\n Ğàäèóñ - %d", circle1.radius);
	printf("\n Ïëîùàäü - %.2f\n", areaÑircle(circle1));
}


