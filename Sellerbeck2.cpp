#include <iostream>
using namespace std;

int main(){
	int laenge, hoehe, umfang, flaeche,ende ;

	cout << "Laenge eingeben!";
	cin >> laenge;
	cout << "Hoehe eingeben!";
	cin >> hoehe;
	flaeche = laenge * hoehe;
	umfang = 2 * laenge + 2 * hoehe;
	cout << "Flaeche ist: ";
	cout << flaeche;
	cout << endl;
	cout << "Umfang ist: ";
	cout << umfang;
	cin >> ende;
	return 0;



}