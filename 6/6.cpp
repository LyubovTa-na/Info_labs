#include<string.h>
#include <iostream>
#include <Windows.h>

// 3. 	Напечатать все слова, которые не содержат гласных букв.
using namespace std;
bool glass(char buka) // проверяет символ на гласность
{
    char GLS[] = "уеаоэяиюeyuoiё";
    int length = strlen(GLS); // длина строки
    for (int i = 0; i < length; i++)
    {
        if (buka == GLS[i])// сравнение символа с гласной
            return true;// если символ гласный
    }
    return false;// если символ согласный
}


int main()
{
    SetConsoleCP(1251);// язык ввода на русский
    SetConsoleOutputCP(1251);// язык вывода на русский

    char words[255];

    cout << "Введите строку: ";

    cin.getline(words, 254);// считываем строку, в размере до 254 символа(последний для завершения строки(\0))
    char word[255];// массив под отдельное слово
    int len = 0;// отслеживаем длину слово


    for (int i = 0; i < strlen(words); i++)
    {// если символ строки при вызове функции возвращяет истину(гласная) вывод гласная

        if (words[i] != ' ' && words[i] != '\0')// если символ не пробел и не конец строки
        {

            word[len] = words[i];// записываем букву на индекс равный ранее записанным буквам
            len++;// увеличиваем длину записанного слова

        }

        else {
            bool flag = false;
            for (int j = 0; j < len && !flag; j++)
            {
                if (glass(word[j]))
                    flag = true;

            }
            if (!flag)
            {
                for (int j = 0; j < len; j++)
                {
                    cout << word[j];
                }
                cout << endl;
            }
            len = 0;// для записи нового слова
        }

    }
}


