#include <iostream>
#include <cmath>
using namespace std;
double fraction(double rez, double i, double e, int x,int znak) {
	rez *= (((2 * i) - 3) / (2 * (i + 2)));
	double retValue = rez * pow(x, i + 2);
	if (abs(retValue) > e) {
		double nextRez = fraction(rez, i++, e, x, -znak);
		return retValue + nextRez*znak;
	}
	else {
		return retValue;
	}
}
int main()
{
	double e;
	double x,control;
	cout << "Write x\n";
	cin >> x;
	cout << "Write e\n";
	cin >> e;
	control = ((48.0 / 15.0) * (pow(x+5,5.0/2.0) - 1.0) - (8.0 * x) - (6.0* x * x));
	cout << fraction(1, 1, e, x, 1)<<endl;
	cout << control;
	return 0;
}