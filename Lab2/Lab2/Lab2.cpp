#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double n, h, y, x,z,pi;
	pi = 3.1415926535;
	cout << "Write n" << endl;
	cin >> n;
	cout << "Write h" << endl;
	cin >> h;
	y = 0;
	for (x = 1;x < n;x += 1) {
		z = pi*((3 * n)*(3*n)) * h;
		y += z;
	}
		cout << y;
		return 0;
}
