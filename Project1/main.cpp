#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	int a;
	int b;
	int c;
	cout << "������� ��� �����\n";
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a << " ������� �����";
	}
	else if (b < a && b < c) {
		cout << b << " ������� �����";
	}
	else if (c < b && c < a) {
		cout << c << " ������� �����";
	}
}