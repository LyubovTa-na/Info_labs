#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double a = 1000, b = 0.0001, x, a2, a3, b2, b3, ab3;
    ab3 = pow((a + b), 3);
    a2 = pow(a, 2);
    a3 = pow(a, 3);
    b2 = pow(b, 2);
    b3 = pow(b, 3);
    x = (ab3 - (a3 + 3 * a2 * b)) / (3 * a * b2 + b3);
    cout << cout.precision(8) << "x_double = " << x << endl;

    float Fa = 1000, Fb = 0.0001, Fx, Fa2, Fa3, Fb2, Fb3, Fab3;
    Fab3 = pow((Fa + Fb), 3);
    Fa2 = pow(Fa, 2);
    Fa3 = pow(Fa, 3);
    Fb2 = pow(Fb, 2);
    Fb3 = pow(Fb, 3);
    Fx = (Fab3 - (Fa3 + 3 * Fa2 * Fb)) / (3 * Fa * Fb2 + Fb3);

    cout << "x_float = " << Fx;


    return 0;
}
