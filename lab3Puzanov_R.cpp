#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Завдання 1 (номер 19): Пошук унікального числа
void task_19() {
    int a, b, c, d;
    cout << "\n Задача 19: Пошук унікального числа \n";
    cout << "Введіть чотири цілих числа (де одне відрізняється від трьох інших рівних):\n";
    cout << "Число 1 (a): "; 
    if (!(cin >> a)) { cout << "Wrong integer!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }
    cout << "Число 2 (b): "; 
    if (!(cin >> b)) { cout << "Wrong integer!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }
    cout << "Число 3 (c): "; 
    if (!(cin >> c)) { cout << "Wrong integer!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }
    cout << "Число 4 (d): "; 
    if (!(cin >> d)) { cout << "Wrong integer!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }

    if (a == b && b == c) {
        cout << "Результат: порядковий номер унікального числа - 4 (це число d = " << d << ")\n";
    } 
    else if (a == b && b == d) {
        cout << "Результат: порядковий номер унікального числа - 3 (це число c = " << c << ")\n";
    } 
    else if (a == c && c == d) {
        cout << "Результат: порядковий номер унікального числа - 2 (це число b = " << b << ")\n";
    } 
    else if (b == c && b == d) {
        cout << "Результат: порядковий номер унікального числа - 1 (це число a = " << a << ")\n";
    } 
    else {
        cout << "Wrong data! (Three numbers must be equal, and one different)\n";
    }
}

// Завдання 1 (номер 8): Вивід від більшого до меншого
void task_8() {
    double x, y;
    cout << "\n Задача 8: Вивід від більшого до меншого\n";
    cout << "Введіть два числа:\n";
    cout << "Перше число: "; 
    if (!(cin >> x)) { cout << "Wrong number!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }
    cout << "Друге число: "; 
    if (!(cin >> y)) { cout << "Wrong number!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }

    if (x > y) {
        cout << "Результат (спочатку більше, потім менше): " << x << " " << y << "\n";
    } else if (y > x) {
        cout << "Результат (спочатку більше, потім менше): " << y << " " << x << "\n";
    } else {
        cout << "Числа рівні між собою: " << x << " і " << y << "\n";
    }
}

// Завдання 2 (Варіант 22): Потрапляння точки в зелену фігуру
void task_geom_22() {
    double x, y, a, r;
    cout << "\n Завдання 2 (Варіант 22): Перевірка потрапляння точки в фігуру \n";
    cout << "Введіть сторону великого квадрата a (>0): ";
    if (!(cin >> a) || a <= 0) { cout << "Wrong data for 'a'!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }
    
    cout << "Введіть радіус кола r (>0): ";
    if (!(cin >> r) || r <= 0) { cout << "Wrong data for 'r'!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }

    cout << "Введіть координати точки через пробіл (x y): ";
    if (!(cin >> x >> y)) { cout << "Wrong coordinates!\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return; }

    // Перевірка чи знаходиться точка всередині великого квадрата [-a/2, a/2]
    double half = a / 2.0;
    if (x < -half || x > half || y < -half || y > half) {
        cout << "Результат: Точка поза межами великого квадрата (Не потрапляє).\n";
        return;
    }

    // Умова потрапляння для варіанта 22 (зелений колір)
    bool hit = ((x > 0 && y > 0 && y <= x) || (x < 0 && y < 0 && y >= x)) && (x * x + y * y > r * r);

    if (hit) {
        cout << "Результат: Точка ПОТРАПЛЯЄ у фігуру заданого (зеленого) кольору.\n";
    } else {
        cout << "Результат: Точка НЕ ПОТРАПЛЯЄ у фігуру заданого кольору.\n";
    }
}

// Завдання 3: Головне меню програми (Main)
int main() {
    int menu;
    do {
        cout << "\n---------------------------------------\n";
        cout << "           ГОЛОВНЕ МЕНЮ ПРОГРАМИ         \n";
        cout << "---------------------------------------\n";
        cout << "1 - Вирішити задачу 19 (унікальне число)\n";
        cout << "2 - Вирішити задачу 8 (сортування чисел)\n";
        cout << "3 - Вирішити задачу 2 (Варіант 22 - фігура)\n";
        cout << "0 - Вихід з програми\n";
        cout << "Введіть пункт меню: ";
        
        if (!(cin >> menu)) {
            cout << "Wrong task! (Only 0-3)\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Інструкція вибору для реалізації меню
        switch (menu) {
            case 1:
                task_19();
                break;
            case 2:
                task_8();
                break;
            case 3:
                task_geom_22();
                break;
            case 0:
                cout << "Вихід з програми...\n";
                break;
            default:
                cout << "Wrong task! (Only 0-3)\n";
                break;
        }
    } while (menu != 0);

    return 0;
}