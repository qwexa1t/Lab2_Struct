#pragma once

#include "Otrezok.h"

struct Rectang
{
	char color[20];
	Otrezok length;

};

//прототипы функций
Rectang initRectang(int a,int b);
Rectang setRectang(Rectang rectang1);
int areaRectang(Rectang rectang1);
void printRectang(Rectang rectang1);