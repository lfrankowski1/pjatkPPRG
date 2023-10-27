
#include <iostream>
using namespace std;

int main()
{
	int n, f1 = 0, f2 = 1, nastepna;
	cout << "Podaj n: ";
	cin >> n;

	if (n == 1 || n == 0)
		cout << n;
	else
		nastepna = f1 + f2;
	for (int i = 3; i <= n; i++)
	{
		f1 = f2;
		f2 = nastepna;
		nastepna = f1 + f2;
	}
	cout << f2 << endl;



}
