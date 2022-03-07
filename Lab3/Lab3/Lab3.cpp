#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double F(double );
	double a, b, c, x, e,s,modul;
	a = 0.2;
	b = 3;
	e = pow(10, -2);
	while (abs(b - a) > e)
	{
		c = (a + b) / 2;
		x=F(a);
		s=F(c);
		modul = x * s;
		if (modul < 0)
		{
			b = c;
		}
		else {
			a = c;
		}
	}
	x = F(a);
	s = F(b);
	modul = x * s;
	if (modul < 0)
	{
		x = F(a);
		cout << x;
	}
	else {
		cout << "X не найден";
	}
}
double F(double v)
{
	double f;
	f = 0.5 * (2 - sin((1 + v) / v) + 0.5 * log(sqrt(v))) - v;
	return f;
}