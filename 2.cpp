#include <iostream>
using namespace std;

int main()
{
	string przedmioty[4] = { "informatyka","matematyka","biologia","jezyk polski" };
	string infoucz[6];
	int ocenyucz[6][4];
	int numerucz = 0;
	int numerprzed = 0;
	int loop = 1;

	for (int i = 0; i < 6; i++) {
		cout << "Podaj imie ucznia nr " << i << ":";
		cin >> infoucz[i];
		for (int j = 0; j < 4; j++) {
			cout << "Podaj ocene z " << przedmioty[j] << ": ";
			cin >> ocenyucz[i][j];
		}
	}

	while (loop == 1) {
		cout << "Podaj numer ucznia(0-5): ";
		cin >> numerucz;
		cout << "Podaj numer przedmiotu(0-informatyka,1-matematyka,2-biologia,3-jezyk polski): ";
		cin >> numerprzed;
		cout << "Ocena ucznia " << infoucz[numerucz] << " :" << ocenyucz[numerucz][numerprzed] << endl;
	}


}
