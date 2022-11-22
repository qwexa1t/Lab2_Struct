#pragma once

struct Rectang
{
	int length;
	int width;
};

//прототипы функций
Rectang initRectang(int value_length,int value_width);
Rectang setRectang(Rectang rectang1);
int areaRectang(Rectang rectang1);
void printRectang(Rectang rectang1);