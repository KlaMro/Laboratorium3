#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
	cout << "Podaj współczynniki równania kwadratowego ax^2 + bx + c = 0: ";
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;

	if (delta > 0) {
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Rozwiązania: x1 = " << x1 << ", x2 = " << x2 << endl;
	} else if (delta == 0) {
		double x = -b / (2 * a);
		cout << "Rozwiązanie: x = " << x << endl;
	} else {
		cout << "Brak rozwiązań rzeczywistych.\n";
	}
	return 0;
}

