#include <iostream>
#include "Real.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    Real::Number n1, n2, n;

    n1.Read();
    n2.Read();

    cout << "Сума:" << endl;
    n.add(n1, n2).Display();

    cout << "Добуток:" << endl;
    n.multiply(n1, n2).Display();

    Real r1, r2, r;

    r1.Read();
    r2.Read();

    cout << "Підняття в степінь:" << endl;
    r.powReal(r1, r2).Display();

    cout << "Логарифм:" << endl;
    r.logReal(r1).Display();
}
