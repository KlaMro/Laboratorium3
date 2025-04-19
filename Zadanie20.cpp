#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string zmienNapis(string napis) {
	string wynik = "";
	for (char n : napis) {
	if (n != ' ') {
	wynik += tolower(n);
        }
    }
    return wynik;
}

bool czyPalindrom(string napis) {
	string odwrotny = napis;
	reverse(odwrotny.begin(), odwrotny.end());
	return napis == odwrotny;
}

int main() {
	string napis;
	cout << "Podaj napis: ";
	getline(cin, napis);
	string sprNapis = zmienNapis(napis);

	if (czyPalindrom(sprNapis)) {
		cout << "To jest palindrom\n";
	} else {
		cout << "To nie jest palindrom.\n";
	}

    return 0;
}

