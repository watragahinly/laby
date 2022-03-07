#include <iostream>
using namespace std;
int NZ(int* X) {
	int count = (0);
	for (int i = 0; i < 5;i++) {
		if (X[i] == 0) {
			count += 1;
		}
	}
	return count;
}
int main()
{
	int X[5];
	cout << "Write X" << endl;
	for (int i = 0; i < 5;i++) {
		cin >> X[i];
	}
	cout << "Number of 0: " << NZ(X);
	return 0;
}
