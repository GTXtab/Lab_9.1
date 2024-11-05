#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double S(const double x, const double eps, int& n, double s);
double A(const double x, const int n, double a);
int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;
    const double Pi = 3.14159265359;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "arccos(x)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        s = S(x, eps, n, s);
        double arccos_value = (Pi / 2) - s;

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << acos(x) << " |"
            << setw(10) << setprecision(5) << arccos_value - x << " |"
            << setw(5) << n << " |"
            << endl;

        x += dx;
    }

    cout << "-------------------------------------------" << endl;
    return 0;

}
double S(const double x, const double eps, int& n, double s)
{
    n = 1; // вираз залежить від умови завдання варіанту
    double a = pow(x, 3) / 6; // вираз залежить від умови завдання варіанту
    s = a;
    do {
        n++;
        a = A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
    return s;
}
double A(const double x, const int n, double a)
{
    double R = ((2.0 * n - 1) * (2.0 * n - 1)) / (2.0 * n * (2.0 * n + 1)) * (x * x); // вираз залежить від умови завдання варіанту
    a *= R;
    return a;
}