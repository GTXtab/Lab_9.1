#include <math.h>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;


void nsSum::sum()
{
    n = 1; // вираз залежить від умови завдання варіанту
    double a = pow(x, 3) / 6; // вираз залежить від умови завдання варіанту
    s = a;
    do {
        n++;
        R = ((2.0 * n - 1) * (2.0 * n - 1)) / (2.0 * n * (2.0 * n + 1)) * (x * x); // вираз залежить від умови завдання варіанту
        a *= R;
        s += a;
    } while (fabs(a) >= eps);
}