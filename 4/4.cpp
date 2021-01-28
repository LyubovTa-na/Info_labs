#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int arr[100];
    int len;
    do 
    {

        cout << "Введите размер массива: ";
        cin >> len;
    } while (len < 0 || len>100);//  проверка
    
    srand(time(0));
    for (int i = 0; i < len; i++)// заполнение массива
    {
        arr[i] = rand() % 101 - 50;
        cout << arr[i] << " ";
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < len - 2; j++)
            {
                arr[j] = arr[j + 1];

            }
            len--;
            i--;

        }

    } cout << "\nМассив без нулевых элементов\n";
    
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (int j = len; j > i + 1; j--)
            {
                arr[j] = arr[j - 1];


            }
            len++;
            if (i != 0)
                arr[i + 1] = arr[i - 1] + 2;
            else
                arr[i + 1] = arr[len - 1] + 2;
            break;
        } 

            
    }
    cout << "\nМассив \n";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}
