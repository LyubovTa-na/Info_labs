#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n = 200;
    int  a, sum;
    sum = 0;
    for (a = 1; a < n;) {
        sum = sum + a;
        cout << "  " << a;
        a = a + 2;
    }
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << endl << " сумма элементов " << sum << endl;
    return 0;
}
