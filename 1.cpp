#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int liczby = 0;

	cout << "Podaj liczbe n: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0) {
			if (i % 5 == 0) {
				liczby++;
			}
		}
	}
	cout << "Jest " << liczby << " liczb naturalnych, które spełniają wymagania";
}
