#include <iostream>

using namespace std;

int main() {

	

	float yield1 = 36;
	float yield2 = 40;
	float yield3 = 44;



	float area1 = 100;
	float area2 = 200;
	float area3 = 300;

	

	float harvest1 = yield1 * area1;
	float harvest2 = yield2 * area2;
	float harvest3 = yield3 * area3;

	

	float totalHarvest = harvest1 + harvest2 + harvest3;

	

	cout << "Врожай з поля №1: " << harvest1 << " т" << endl;
	cout << "Врожай з поля №2: " << harvest2 << " т" << endl;
	cout << "Врожай з поля №3: " << harvest3 << " т" << endl;
	cout << "Загальний врожай: " << totalHarvest << " т" << endl;

	return 0;
}


