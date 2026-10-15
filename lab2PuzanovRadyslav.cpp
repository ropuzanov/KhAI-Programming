#include <iostream>
#include <cmath>     // бібліотеки для математики
#include <iomanip>   // для налаштування виведення


using namespace std;


int main() {
    // виводимо true/false сло вами, а не 1/0
    cout << boolalpha;


    // Задача 1. Integer13
    cout << "Завдання 1. Integer13" << endl;


    int num;
    cout << "Введіть тризначне число: ";
    cin >> num;


    // відокремлюємо першу цифру
    int d1 = num / 100;


    // отримуємо дві цифри, що залишилися
    int rem = num % 100;


    // переносимо першу цифру в кінець
    int res = rem * 10 + d1;


    cout << "Отримане число: " << res << endl << endl;




    // Задача 2. Boolean36
    cout << "Завдання 2. Boolean36" << endl;


    int x1, y1, x2, y2;
    cout << "Введіть координати першої клітинки (x1 y1 від 1 до 8): ";
    cin >> x1 >> y1;
    cout << "Введіть координати другої клітинки (x2 y2 від 1 до 8): ";
    cin >> x2 >> y2;


    // тура ходить по прямій, тому мають збігатися або X, або Y
    bool can_move = (x1 == x2) || (y1 == y2);


    cout << "Тура може зробити такий хід: " << can_move << endl << endl;




    // Задача 3. Математичний вираз (Варіант 10)
    cout << "Завдання 3. Математичний вираз (Варіант 10)" << endl;


    const double PI = 3.141592653589793;
    double x;


    cout << "Введіть дійсне число x: ";
    cin >> x;


    // переводимо 29 градусів у радіани
    double rad29 = 29.0 * PI / 180.0;


    // рахуємо чисельник першого дробу
    double top1 = cbrt(x * x) + sqrt(fabs(x));


    // рахуємо знаменник першого дробу
    double sin_part = sin(fabs(x) + rad29);
    double bot1 = log2(sin_part * sin_part);


    // рахуємо другий дріб
    double part2 = (PI * fabs(tan(x))) / 2.0;


    // загальна сума
    double y = (top1 / bot1) + part2;


    cout << "Результат обчислення y = " << y << endl;


    return 0;
}
