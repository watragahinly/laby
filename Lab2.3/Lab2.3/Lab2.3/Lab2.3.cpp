#include <iostream>
using namespace std;
int srav(double** a, int lines, int columns,int middle) {
	int count(0);
	for (int i = 0;i < lines;i++) {
		for (int j = columns;j < middle;j++) {
			if (a[i][j] == 0) {
				count += 1;
			}		
		}
	}
	return count;
}
double** MASSIVSOZDAET(unsigned int n, unsigned int b) {
	double** a = new double* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new double[b];
	}
	return a;
}
int main()
{
	double** a;
	int n, b;
	cout << "Number of lines\n";
	cin >> n;
	cout << "Number of columns\n";
	cin >> b;
	if (n == 0 || b == 0) {
		cout << "Columns or lines must be > 0\n";
		return -1;
	}
	if (b % 2 != 0) {
		cout << "Columns not even\n";
		return -1;
	}

	a = MASSIVSOZDAET(n, b);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < b;j++) {
			cout << "Write A" << i + 1 << j + 1 << endl;
			cin >> a[i][j];
		}
	}
	if ( srav(a,n,0,(b/2))> srav(a,n,(b/2),b)) {
		cout << "Left\n";
	}
	else {
		if (srav(a, n, 0,(b/2) ) < srav(a, n, (b/2), b )) {
			cout << "Right\n";
		}
		else {
			cout << "Equal\n";
		}
	}
	for (int i = 0; i < n; i++) {
		delete[] a[i];
		delete[] a;
	}
	return 0;
}