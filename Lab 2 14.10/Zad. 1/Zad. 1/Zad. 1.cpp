
#include <iostream>
using namespace std;

int main()
{
	int a, b, i, j, czyPierwsza;
	cout << "Podaj zakres: ";
	cin >> a;
	cin >> b;
	cout << "Liczby pierwsze z podanego zakresu: ";
	for (i = a; i <= b; i++) {
		if (i == 1 || i == 0)
			continue;
		czyPierwsza = 1;

		for (j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				czyPierwsza = 0;
				break;
			}
		}
		if (czyPierwsza == 1)
			cout << i << " ";


	}
	return 0;
}
