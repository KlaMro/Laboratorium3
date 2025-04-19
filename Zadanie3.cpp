#include <iostream>
using namespace std;

int main() {
	double a, b;
	cout << "Program oblicza miejsce zerowe równania liniowego ax + b = 0.\n";
	cout << "Podaj współczynniki a i b: ";
	cin >> a >> b;

	if (a == 0) {
		if (b == 0) {
			cout << "Równanie ma nieskończenie wiele rozwiązań.\n";
		} else {
			cout << "Równanie nie ma rozwiązania.\n";
		}
	}
	else {
		double x = -b / a;
		cout << "Miejsce zerowe= " << x << endl;
	}

	cout << "Naciśnij Enter, aby zakończyć.";
	cin.ignore();
	cin.get();
	return 0;
}
