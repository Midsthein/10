#include <iostream>
#include <math.h>

using namespace std;

int main() {



	int i = 4;



	float Ax = 0;
	float Ay = 0;
	float Bx = i;
	float By = i - 1;
	float Cx = -i;
	float Cy = i + 1;


	float a = sqrt((Cx - Bx) * (Cx - Bx) + (Cy - By) * (Cy - By));
	float b = sqrt((Ax - Cx) * (Ax - Cx) + (Ay - Cy) * (Ay - Cy));
	float c = sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));
	float m = sqrt(a * c * (a + b + c) * (a - b + c)) / (a + c);
	float p = (a + b + c) / 2;
	float h = (2 / a) * sqrt(p * (p - a) * (p - b) * (p - c));
	

	cout << "Висота трикутника: " << h << endl;
	cout << "Бісектриса трикутника: " << m << endl;

	return 0;
}
