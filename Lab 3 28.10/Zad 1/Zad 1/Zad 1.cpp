
#include <iostream>
using namespace std;

int main()
{
    int element, roznica, liczbaele, suma = 0;
    cout << "Podaj pierwszy element ciagu arytmetycznego:" << endl;
    cin >> element;
    cout << "Podaj roznice ciagu:" << endl;
    cin >> roznica;
    cout << "Podaj liczbe elementow ciagu:" << endl;
    cin >> liczbaele;
    suma = (((2 * element) + (liczbaele - 1) * roznica) / 2) * liczbaele;
    cout << "Suma ciagu:" << suma << endl;
}