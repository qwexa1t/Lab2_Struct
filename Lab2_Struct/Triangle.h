#pragma once

struct Triangle
{
	int side;
	int height;
};

//��������� �������
Triangle initTriangle(int value_side,int value_height);
Triangle setTriangle(Triangle triangle1);
float  areaTriangle(Triangle triangle1);
void printTriangle(Triangle triangle1);


