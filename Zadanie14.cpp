#include <iostream>
using namespace std;

int main() {
	double liczba1, liczba2;
	char operacja;

	cout << "Kalkulator\n";
	cout << "Wybierz operację (+, -, *, /): ";
	cin >> operacja;
	cout << "Podaj dwie liczby: ";
	cin >> liczba1 >> liczba2;

	switch (operacja) {
		case '+':
			cout << "Wynik: " << liczba1 + liczba2 << endl;
			break;
		case '-':
			cout << "Wynik: " << liczba1 - liczba2 << endl;
			break;
		case '*':
			cout << "Wynik: " << liczba1 * liczba2 << endl;
			break;
		case '/':
			if (liczba2 != 0) {
				cout << "Wynik: " << liczba1 / liczba2 << endl;
			} else {
			cout << "Nie dzieli się przez zero\n";
			}
			break;
		default:
			cout << "Niedozwolona operacja.\n";
			break;
		}
		return 0;
}

