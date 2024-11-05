#include <math.h>
#include <iostream>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsVar;
using namespace nsSum;

int main()
{
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
        sum();
        double arccos_value = (Pi / 2) - s;

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << acos(x) << " |"
            << setw(10) << setprecision(5) << arccos_value - x << " |"
            << setw(5) << n << " |"
            << endl;

        x += dx;
    }
    cin.get();

    cout << "-------------------------------------------" << endl;

    return 0;
}