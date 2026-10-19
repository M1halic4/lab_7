#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int task1();
int task2();

int main()
{
	setlocale(LC_ALL, "RUS");

	task2();

	return 0;
}

int task1()
{
	char c;

	printf("Введите число или букву: ");
	scanf("%c", &c);//считывание с консоли
	
	switch (c)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("Введено число.\n");
		break;

	default:
		if (isalpha((unsigned char)c) != 0) printf("Введа буква.\n");
		else printf("Неизыестный символ.\n");
	}

	return 0;
}

int task2()
{
	//Инициализация переменных
	float x, y;
	char c;

	//Ввод данных пользователем
	printf("Введите математическия пример из двух чисел и знака операции между ними, без пробелов (возвести в степень - **)\n");
	scanf("%f%c%f", &x, &c, &y);

	//Определение знака опреации и вывод результата операции
	switch (c)
	{
	case '+':
		printf("=%f", x + y);
		break;
	case '-':
		printf("=%f", x - y);
		break;
	case '*':
		printf("=%f", x * y);
		break;
	case '/':
		printf("=%f", x / y);
		break;
	case '^':
		printf("=%f", pow(x, y));
		break;
	default:
		printf("Возникла ошибка при вводе математического примера.\n");
	}
}