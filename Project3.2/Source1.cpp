#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	53
		cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < 0 && b != 0)
		F = -(2 * x - c) / (b * x - a);
	if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = -x / c + (-c) / (2 * x + 1);
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 0 && b != 0)
		F = -(2 * x - c) / (b * x - a);
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = -x / c + (-c) / (2 * x + 1);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}