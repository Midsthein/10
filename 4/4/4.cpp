#include <iostream>
#include <math.h>

using namespace std;

int main() {

	

	double x = 1.7;

	

	double t;
	cout << "Введіть значення t: ";
	cin >> t;

	

	double a = log(x);

	

	double b = sqrt(x * x + t * t);

	

	double y = cbrt(abs(a - b));

	

	cout << "y = " << y << endl;

	return 0;
}

