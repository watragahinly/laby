#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, f, n, w, t, z;
	const double e = 2.71828182;
	cin >>x;
	if (x >= 3 && x <= 10)
	{
		n = (1 / 5);
		w = exp(x / 5);
		t = abs(pow(log(x), 2) - 1.3);
		z = sqrt(n + w);
		f = z / t;
			cout << f;
	}
	else cout << "ERROR";
	return 0;
}