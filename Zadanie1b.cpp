#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double podstawa, wykladnik;
	cout << "Podaj podstawę i wykładnik: ";
	cin >> podstawa >> wykladnik;
	double wynik_for = 1;
	double wynik_while=1;
	double wynik_do_while=1;

	for (int i = 0; i < abs(wykladnik); ++i) {
		wynik_for *= podstawa;
	}
	if (wykladnik < 0) wynik_for = 1 / wynik_for;
		cout << "Potęga (for): " << wynik_for << endl;

	int i = 0;
	while (i < abs(wykladnik)) {
		wynik_while *= podstawa;
		i++;
	}
	if (wykladnik < 0) wynik_while = 1/wynik_while;
		cout << "Potęga (while): " << wynik_while <<endl;

	int j = 0;
	do{
		wynik_do_while *= podstawa;
		j++;
	} while (j <abs(wykladnik));
	if (wykladnik < 0) wynik_do_while = 1 / wynik_do_while;
	cout << "Potęga (do..while): " << wynik_do_while <<endl;
	return 0;
}

