#include <iostream>

using namespace std;

// Област визначення функції
bool area(double x) {
    return (x >= -1 && x <= 1);
}

// Значення виразу
double value(double x) {
    return (x * x + 1);
}

int main() {
    // Введення значення аргументу
    double x;
    cout << "x = ";
    cin >> x;

    // Перевірка області визначення
    if (!area(x)) {
        cout << "x не належить області визначення функції" << endl;
        return 0;
    }

    // Знаходження значення виразу
    double v = value(x);

    // Виведення результату
    cout << "Значення виразу: " << v << endl;

    return 0;
}

