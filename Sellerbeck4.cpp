#include <iostream>
using namespace std;

int main(){
	
	int Menge1, Menge2, Preis1, Preis2, Umsatz1, Umsatz2, UmsatzGes;

	cout << "Menge Artikel 1: "; 
	cout << endl;
	cin >> Menge1;

	cout << "Preis Artikel 1: ";
	cout << endl;
	cin >> Preis1;

	cout << "Menge Artikel 2: ";
	cout << endl;
	cin >> Menge2;

	cout << "Preis Artikel 2: ";
	cout << endl;
	cin >> Preis2;
	cout << endl;

	Umsatz1 = Menge1 * Preis1;
	Umsatz2 = Menge2 * Preis2;
	UmsatzGes = Umsatz1 + Umsatz2;

	cout << "Umsatz Artikel 1: ";
	cout << endl;
	cout << Umsatz1;
	cout << endl;

	cout << "Umsatz Artikel 2: ";
	cout << endl;
	cout << Umsatz2;
	cout << endl;

	cout << "Umsatz Gesamt: ";
	cout << endl;
	cout << UmsatzGes;
	cout << endl;

	system("pause");
	return 0;
}