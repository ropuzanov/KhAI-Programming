#include <iostream>
using namespace std;

int main() {
    //Задача Begin2
    cout << "Begin 2" << endl;
    double a, S;
    
    cout << "Введіть сторону квадрата a: ";
    cin >> a;
    
    S = a * a; // S = a^2
    cout << "Площа S = " << S << endl;

    
    //Задача Begin3
    //Знаходження площі та периметра прямокутника
    cout << "\nBegin 3" << endl;
    double b, P;
    
    cout << "Введіть сторону a: ";
    cin >> a;
    cout << "Введіть сторону b: ";
    cin >> b;
    
    S = a * b; // S = a * b
    P = 2 * (a + b); // P = 2 * (a + b)
    
    cout << "Площа S = " << S << endl;
    cout << "Периметр P = " << P << endl;

    
    //Задача Begin4
    //Знаходження довжини кола
    cout << "\nBegin 4" << endl;
    double d, L;
    double pi = 3.14; // pi = 3.14
    
    cout << "Введіть діаметр d: ";
    cin >> d;
    
    L = pi * d; // L = pi * d
    cout << "Довжина кола L = " << L << endl;

    return 0;
}   