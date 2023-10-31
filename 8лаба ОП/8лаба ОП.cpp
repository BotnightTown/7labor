#include <iostream>
#include <iomanip>
#include "windows.h"
#include <cmath>

using namespace std;

float Sum(int, int);

float Sum(int a, int b)
{
	int sum = 0;
	sum = sum + sqrt(a + b);
	float y;
	y = sum;
	return y;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Введіть a = ";
	cin >> a;
	cout << "Введіть b = ";
	cin >> b;
	float rez;
	rez = Sum(a, b);
	cout << setw(10) << setprecision(3) << "Y= " << rez << endl;
	// 123123

}
