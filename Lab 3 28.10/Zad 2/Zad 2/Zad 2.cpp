#include <iostream>
#include <string>
using namespace std;
int main()
{
	int proby = 1;
	string guess;
	string haslo = "pjatk";
	cout << "Zgadnij 5-literowe haslo:";
	cin >> guess;
	while (haslo != guess) {
		cout << "Haslo niepoprawne, sprobuj ponownie:";
		cin >> guess;
		proby++;
	}
	cout << "Gratulacje udalo ci sie w " << proby << " probach.";
}