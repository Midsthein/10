#include <iostream>

using namespace std;

int main() {

	

	float startReading, endReading;
	cout << "Введіть показник лічильника на початку періоду: ";
	cin >> startReading;
	cout << "Введіть показник лічильника в кінці періоду: ";
	cin >> endReading;

	

	float consumption = endReading - startReading;

	

	float tariff;
	cout << "Введіть тариф на електроенергію: ";
	cin >> tariff;

	

	float cost = consumption * tariff;

	

	cout << "Вартість витраченої електроенергії: " << cost << endl;

	return 0;
}
