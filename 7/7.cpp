﻿#include <iostream>
#include <cmath>

double F(double x); //Функция
double dF(double x); //Производная функции F

void newton(); //Метод Ньютона
void divide(); //Метод половинного деления
void iterations(); //Метод итераций

using namespace std;

int left = 2, right = 3; //левая и правая границы
double eps = 0.0001; //Точность eps

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Точное значение корня: 2.2985" << endl;

    newton();
    divide();
    iterations();
}

double F(double x)
{
    return (3 * sin(sqrt(x)) + 0.35 * x - 3.8);
}

double dF(double x)
{
    return (3 * cos(sqrt(x)) * (1 / (2 * sqrt(x))) + 0.35);
}

void newton()
{
    //
}

void divide()
{
    double l = ::left, r = ::right;
    double x;
    do
    {
        x = (r + l) / 2.0; //середина отрезка

        if (F(l) * F(x) < 0) r = x; //Проверка на разность знаков
        else l = x;
    } while (abs(l - r) >= eps);

    cout << "Решение методом половинного деления: " << x << endl;
}

void iterations()
{
    //
}