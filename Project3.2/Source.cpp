// Lab_03_2.cpp
// Торос Владислав
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 17#include <iostream>#include <cmath>using namespace std;int main(){	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;	// Спосіб 1; Розгалуження в скороченій формі 	if (x + 10 < 0 && b != 0)
		F = a * (x * x) - c * x + b;
	if (x + 10 > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x + 10 < 0 && b != 0) && !(x + 10 > 0 && b == 0));
	F = (-x) / (a - c);

	cout << endl;
	cout << "1. F= " << F << endl;
	cin.get();
	return 0;
}
	