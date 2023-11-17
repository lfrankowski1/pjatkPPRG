#include <iostream>
#include<cstdlib>

using namespace std;

int main() {

	int komputer = (rand() % 3) + 1;
	int gracz;
	char dalej = 'y';

	while (dalej == 'y') {

		cout << "Wybierz jedno: " << endl
			<< "1. Papier" << endl
			<< "2. Kamien" << endl
			<< "3. Nozyce" << endl;
		cin >> gracz;

		if (komputer == 1)
			cout << "Komputer wybral papier." << endl;
		if (komputer == 2)
			cout << "Komputer wybral kamien." << endl;
		if (komputer == 3)
			cout << "Komputer wybral nozyce." << endl;

		if (komputer == gracz)
			cout << "Remis" << endl;
		if (komputer - gracz == -1 || komputer - gracz == 2)
			cout << "Komputer wygrywa" << endl;
		if (komputer - gracz == 1 || komputer - gracz == -2)
			cout << "Wygrywasz" << endl;

		cout << "Gramy dalej? y/n" << endl;
		cin >> dalej;
	}

	cout << "Koniec gry" << endl;
	return 0;



}
