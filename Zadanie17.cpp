#include <iostream>
using namespace std;

int main() {
	int N, dolny = 1, gorny;
	cout << "Podaj zakres (liczbę N, maksymalną liczbę do zgadnięcia): ";
	cin >> N;
	gorny = N;
	char odp;

	cout << "Pomyśl o liczbie między 1 a " << N << ".\n";
	while (dolny <= gorny) {
		int zgadywana = (dolny + gorny) / 2;
		cout << "Czy twoja liczba to " << zgadywana << "? {d(za dużo)/m(za mało)/t(tak)}: ";
		cin >> odp;
		if (odp == 't') {
			cout << "Komputer zgadł liczbę\n";
			break;
		} else if (odp == 'm') {
			dolny = zgadywana + 1;
		} else if (odp == 'd') {
			gorny = zgadywana - 1;
		}
	}
	return 0;
}

