#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	int a;
	int b;
	int c;
	cout << "введите три числа\n";
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a << " меньшее число";
	}
	else if (b < a && b < c) {
		cout << b << " меньшее число";
	}
	else if (c < b && c < a) {
		cout << c << " меньшее число";
	}
}