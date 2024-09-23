#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F ;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;


	if (x < 0.6 && b + c != 0)
		F = a * x * x + b * b + c;
	if (x > 0.6 && b + c == 0)
		F = (x - a) / (x - c);
	if (!(x < 0.6 && b + c != 0) && !(x > 0.6 && b + c == 0))
		F = x / c + x / a;


	cin.get();
	cout << "|" << setw(7) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << F
		<< " |" << endl;
	x += dx;

	cout << "---------------------------" << endl;
	return 0;
}
