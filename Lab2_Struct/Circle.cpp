#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include <stdio.h>
#include<math.h>
#define PI 3.14

Ñircle initÑircle(int a)
{
	Ñircle circle1;
	circle1.length.radius[0] = a;
	return circle1;
}
Ñircle setÑircle(Ñircle circle1)
{
	printf(" Ââåäèòå Ğàäèóñ:");
	scanf("%d", &circle1.length.radius[0]);
	return circle1;
}
float areaÑircle(Ñircle circle1)
{
	float area;
	area = PI * circle1.length.radius[0]* circle1.length.radius[0];
	return area;
}
void printÑircle(Ñircle circle1)
{
	printf("\n Ğàäèóñ - %d", circle1.length.radius[0]);
	printf("\n Ïëîùàäü - %.2f\n", areaÑircle(circle1));
}


