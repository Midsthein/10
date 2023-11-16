#include <iostream>
#include <math.h>

using namespace std;

int main() {

    

    double a = 0;
    double z_2_1 = tan(3 * a);
    double z_2_2 = 0;

   

    double z_1 = sin(2 * a + sin(5 * a - sin(3 * a))) / cos(a - cos(3 * a + cos(5 * a)));

   

    for (int i = 0; i < 10; i++) {
        a = i * 0.1;
        z_2_2 = tan(3 * a);
        if (z_1 != z_2_2) {
            cout << "Результати обчислень не співпадають для a = " << a << endl;
            break;
        }
    }

    

    cout << "z_1 = " << z_1 << endl;
    cout << "z_2 = " << z_2_2 << endl;

    return 0;
}

