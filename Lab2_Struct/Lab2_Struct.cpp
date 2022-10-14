#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <cstring>
#include <windows.h>
#include <ctype.h>
#include "Square.h"
#include "otrezok.h"
#include "Rectang.h"
#include "Triangle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;

	do
	{
		printf("\n Программа для вычисления площади различных фигур");
		printf("\n Выберите фигуру: ");
		printf("\n 1) Квадрат");
		printf("\n 2) Прямоугольник");
		printf("\n 3) Треугольник");
		printf("\n 4) Завершить программу");
		printf("\n\n Введите номер фигуры: ");
		while (scanf("%d", &N) != 1 || N <= 0 || N > 4)
		{
			while (getchar() != '\n');
			printf("\n Вы ввели Неверный номер. Повторите попытку.\n");
			printf("\n Введите номер фигуры: ");
		}
		switch (N)
		{
		case 1:
			printf("\n Вы выбрали квадрат \n");
			Square square1; //Создаем первую фигуру
			printf("\n Пример \n");
			square1 = initSquare(2); // Инициализация квадрата
			printSquare(square1); //Вывод площади квадрата на экран
			printf("\n\n Введите данные: \n\n");
			square1 = setSquare(square1); //Установка значений
			printSquare(square1);
			break;
		case 2:
			printf("\n Вы выбрали Прямоугольник \n");
			Rectang rectang1; //Создаем вторую фигуру
			printf("\n Пример \n");
			rectang1 = initRectang(2, 4); // Инициализация прямоугольника
			printRectang(rectang1); //Вывод площади прямоугольника на экран
			printf("\n\n Введите данные: \n\n");
			rectang1 = setRectang(rectang1); //Установка значений
			printRectang(rectang1);
			break;
		case 3:
			printf("\n Вы выбрали Треугольник \n");
			Triangle triangle1; //Создаем третью фигуру
			printf("\n Пример \n");
			triangle1 = initTriangle(3, 5); // Инициализация тругольника
			printTriangle(triangle1); //Вывод площади треугольника на экран
			printf("\n\n Введите данные: \n\n");
			triangle1 = setTriangle(triangle1); //Установка значений
			printTriangle(triangle1);
			break;
		}

	} while (N != 4);
}