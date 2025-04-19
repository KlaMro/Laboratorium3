#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	const int MAX = 100000000;
	double suma1 = 0.0, suma2 = 0.0;

	for (int i = 1; i <= MAX; i++) {
		suma1 += 1.0 / (i * 1.0 * i);
	}

	for (int i = MAX; i >= 1; i--) {
		suma2 += 1.0 / (i * 1.0 * i);
	}
	cout << "Suma1" << suma1 << endl;
	cout << "Suma2" << suma2 << endl;
	printf("printf -> Suma1: %.15f\n", suma1);
	printf("printf -> Suma2: %.15f\n", suma2);
	return 0;
}

