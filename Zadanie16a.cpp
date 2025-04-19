#include <iostream>
using namespace std;

void zasady() {
    cout << "Zasady gry w 11 zapałek:\n";
    cout << "- Na stole znajduje się 11 zapałek.\n";
    cout << "- Gracze na przemian biorą 1, 2 lub 3 zapałki.\n";
    cout << "- Gracz, który weźmie ostatnią zapałkę, wygrywa.\n";
    cout << "Wersja, w której komputer zawsze wygra, zakłada odpowiednią strategię.\n";
    cout << "Gra zaczyna się, gdy komputer wykonuje pierwszy ruch.\n\n";
}

int main() {
	zasady();
	int zapalki = 11;
	int ruchGracza, ruchKom;
	bool tura = false;

	while (zapalki > 0) {
		cout << "Na stole pozostalo " << zapalki << " zapałek.\n";
		if (tura) {
			cout << "Weź 1, 2 lub 3 zapałki: ";
			cin >> ruchGracza;
			if (ruchGracza < 1 || ruchGracza > 3 || ruchGracza > zapalki) {
				cout << "Niepoprawny ruch.\n";
				continue;
			}
			zapalki -= ruchGracza;
			if (zapalki == 0) {
				cout << "Wygrałeś!\n";
				break;
			}
			} else {
			if (zapalki <= 3) {
				ruchKom = zapalki;
			} else {
				int idealnyStan = zapalki % 4;
				ruchKom = (idealnyStan == 0) ? 3 : idealnyStan;
			}
			cout << "Komputer bierze " << ruchKom << " zapałki.\n";
			zapalki -= ruchKom;
			if (zapalki == 0) {
				cout << "Komputer wygrał!\n";
				break;
			}
		}
		tura = !tura;
	}
	return 0;
}

