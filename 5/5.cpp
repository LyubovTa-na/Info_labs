
#include <iostream>
#include <ctime>

using namespace std;

void FillArray(int** matr, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matr[i][j] = rand() % 10;
        }
    }
}

void PrintArray(int** matr, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "---------------------------------------------------" << endl;
}

void Transp(int** matr, int** matrT, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrT[i][j] = matr[size - j - 1][i];
        }
    }
}

void Sum(int** matr1, int** matr2, int** matrSum, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrSum[i][j] = matr1[i][j] + matr2[i][j];
        }
    }
}


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;
    cout << "-----------------------------" << endl;

    //создаем первую матрицу
    int** arr = new int* [n];  //выделяем память под массив указателей на указатели
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];  // выделяем память под массив указателей
    FillArray(arr, n); //процедура заполнения матрицы arr размером n
    PrintArray(arr, n); //процедура вывода матрицы arr на экран

    //создаем вторую матрицу, которая будет транспонированной
    int** arrT = new int* [n];
    for (int i = 0; i < n; i++)
        arrT[i] = new int[n];
    Transp(arr, arrT, n); //процедура транспонирования матрицы, которой в качестве второго аргумента передается матрица, в котороую будет записана транспонированная матрица
    PrintArray(arrT, n);

    //создаем матрицу, которая будет матрицей суммы
    int** arrS = new int* [n];
    for (int i = 0; i < n; i++)
        arrS[i] = new int[n];
    Sum(arr, arrT, arrS, n);  // вызываем процедуру суммы матриц, которой передем 1-ю матрицу, 2-ю матрицу, 3-ю матрицу, в которой будет сумма 2х матриц
    PrintArray(arrS, n); // выводим на экран матрицу, которая содержит сумму матриц

    return 0;
}
