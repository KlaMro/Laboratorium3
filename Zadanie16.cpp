#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int liczba = rand() % 100 + 1;
	int zgadywana;
	cout << "Zgadnij liczbę od 1 do 100, wprowadzając '0' aby zakończyć: ";

	while (true) {
		cin >> zgadywana;
		if (zgadywana == 0) {
			cout << "Koniec, a wylosowana liczba to: " << liczba << endl;
			break;
		}

		if (zgadywana < liczba) {
			cout << "za mało: ";
		} else if (zgadywana > liczba) {
			cout << "za dużo: ";
		} else {
			cout << "Zgadłeś liczbę.\n";
			break;
		}
	}
	return 0;
}

