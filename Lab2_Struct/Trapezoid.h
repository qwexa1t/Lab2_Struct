#pragma once

struct Trapezoid
{
	int lower_base;
	int upper_base;
	int height;
};

Trapezoid initTrapezoid(int value_lower_base, int value_upper_base, int value_height);
Trapezoid setTrapezoid(Trapezoid trapezoid1);
float areaTrapezoid(Trapezoid trapezoid1);
void printTrapezoid(Trapezoid trapezoid1);