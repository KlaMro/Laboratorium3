#include <iostream>
#include <string>
using namespace std;

int main() {
	string ciag;
	int jedynki = 0, bledy = 0;
	cout << "Wprowadź ciąg zer i jedynek-wciśnięcie Enter to koniec: ";
	getline(cin,ciag);
	int wynik = 0;

	for (char znak : ciag) {
		if (znak == '1') {
			jedynki++;
			wynik^= 1;
		} else if (znak == '0') {
			wynik^= 0;
		} else {
			bledy++;
		}
	}

	cout << "Wynik XOR: " << wynik <<endl;
	cout << "Liczba jedynek: " << jedynki << endl;
	cout << "Liczba błędnych znaków: " << bledy << endl;
	return 0;
}

