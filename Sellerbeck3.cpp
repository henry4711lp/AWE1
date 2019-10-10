#include <iostream>
using namespace std;

int main(){
	int seitenlaenge, volumen, oberflaeche;
	cout << "Was ist die Seitenlaenge?";
	cout << endl;
	cin >> seitenlaenge;
	cout << endl;
	volumen = seitenlaenge * seitenlaenge * seitenlaenge ;
	oberflaeche = seitenlaenge * seitenlaenge * 6;
	cout << "Das Volumen betraegt: " << volumen << " Kubikzentimeter";
	cout << endl;
	cout << "Die Oberfläche betragt: " << oberflaeche << " Quadratzentimeter";
	cout << endl;
	system("pause");
	return 0;
}