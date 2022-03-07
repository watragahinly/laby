#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double F(double);
	double a, b, c, fa, e, fb, modul;
	a = 0.2;
	b = 3;
	e = pow(10, -2);
	while (abs(b - a) > e)
	{
		c = (a + b) / 2;
		fa = F(a);
		fb = F(c);
		modul = fa * fb;
		if (modul < 0)
		{
			b = c;
		}
		else {
			a = c;
		}
	}
	fa = F(a);
	fb = F(b);
	modul = fa * fb;
	if (modul < 0)
	{
		fa = F(a);
		cout << fa;
	}
	else {
		cout << "X не найден";
	}
	return 0;
}
double F(double v)
{
	double f;
	f = 0.5 * (2 - sin((1 + v) / v) + 0.5 * log(sqrt(v))) - v;
	return f;