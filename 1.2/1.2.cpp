#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double n, m;
    cout << "Введите n" << endl;
    cin >> n;
    cout << "Введите m" << endl;
    cin >> m;
    cout << "------------------------------------" << endl;
    cout << "n =" << n << endl << "m =" << m << endl;
    cout << "Выражение n---m: " << (n-- - m) << endl;
    cout << "n =" << n << endl << "m =" << m << endl;
    cout << "------------------------------------" << endl;
    cout << "n =" << n << endl << "m =" << m << endl;
    cout << "Выражение m--<n: " << (m-- < n) << endl;
    cout << "n =" << n << endl << "m =" << m << endl;
    cout << "------------------------------------" << endl;
    cout << "n =" << n << endl << "m =" << m << endl;
    cout << "Выражение n++>m: " << (n++ > m) << endl;
    cout << "n =" << n << endl << "m =" << m << endl;
    return 0;
}
