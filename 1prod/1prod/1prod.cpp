#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, n, h, y,mas;
	cout << "Write n" << endl;
	cin >> n;
	y = 0;
	h = 0;
	mas = 0;
	for (x = 1;x <= n;x += 1) {
		h = x * x;
		y += h;
		mas = y * 2;  // Пусть масса 1 кубика равна двум.
	}
	cout << "Total count: "<< y << "\n";
	cout <<"Total weight: "<< mas;
	return 0;
}
