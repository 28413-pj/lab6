#include <iostream>
using namespace std;

int main()
{
	string slowo;
	string dokon;
	int n;
	cout << "Podaj wyraz do konkatenacji: ";
	cin >> slowo;
	dokon = slowo;
	cout << "Podaj ilosc konkatenacji: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		slowo += dokon;
	}
	cout << slowo;
}
