// Online C++ compiler to run C++ program online
#include <iostream> //Ввод-вывод
#include <iomanip> //Управление точностью при выводе
#include <cmath> //Математическая библиотека

double findSumN(double x); //Нахождение суммы N членов ряда
double findSumE(double x); //Нахождение суммы ряда до точности eps

int main() {
    double a = 0.1, b = 1,   //Левая и правая границы диапазонов
        k = 10,           //Количество точек внутри диапазона
        step = (b - a) / k,   //Шаг для точек
        y;                //Результат функции

    for (double x = a; x <= b; x += step)
    {
        y = sin(x);

        std::cout << std::setprecision(3)
            << "X = " << x << '\t' << "Y = " << y << '\t'
            << "SN = " << findSumN(x) << '\t' << "SY = " << findSumE(x) << '\n';
    }

    return 0;
}

double findSumN(double x) //Нахождение суммы N членов ряда
{
    double sum = x,  //Сумма
        prev = x, //Предыдущий член ряда
        curr; //Текущий член ряда
    int n = 10; //Количество членов ряда суммы

    for (int i = 1; i <= n; i++)
    {
        //Вычисление текущего члена ряда через рекуррентное соотношение
        curr = prev * (-(x * x) / (4 * i * i + 2 * i));
        sum += curr; //Суммирование с остальными членами ряда
        prev = curr; //Текущий член ряда становится предыдущим
    }

    return sum; //Возврат полученной суммы из функции
}

double findSumE(double x) //Нахождение суммы ряда до точности eps
{
    double sum = x,   //Сумма
        prev = x,  //Предыдущий член ряда
        curr, //Текущий член ряда
        eps = 1e-4; //Заданная точность 0.0001

    for (int i = 1; std::abs(prev) >= eps; i++)
    {
        //Вычисление текущего члена ряда через рекуррентное соотношение
        curr = prev * (-(x * x) / (4 * i * i + 2 * i));
        sum += curr; //Суммирование с остальными членами ряда
        prev = curr; //Текущий член ряда становится предыдущим
    }

    return sum; //Возврат полученной суммы из функции
}