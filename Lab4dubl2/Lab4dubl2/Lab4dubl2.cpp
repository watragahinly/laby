#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double F(double);
	double a, b, c, fa, e, fb,fc;
	a = 0.6;
	b = 2;
	cout << "Wrtie e" << endl;
	cin >> e;
	fa = 2.5 - ((sqrt(a) + pow(a, 1 / 3)) / pow(e, 3 / 2)) - a;
	fb = 2.5 - ((sqrt(b) + pow(b, 1 / 3)) / pow(e, 3 / 2)) - b;
	while (abs(b - a) > e)
	{
		c = (a + b) / 2;
		fc = 2.5 - ((sqrt(c) + pow(c, 1 / 3)) / pow(e, 3 / 2)) - c;
		if ((fa* fc) <= 0)
		{
			b = c;
			fb = fc;
		}
		else {
			a = c;
			fa = fc;
		}
	}
	fa = 2.5 - ((sqrt(a) + pow(a, 1 / 3)) / pow(e, 3 / 2)) - a;
	cout << "x= "<<a<<" f(x)= "<<fa;
	return 0;
}
