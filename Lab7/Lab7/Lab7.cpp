#include <iostream>
using namespace std;
int main()
{
	int A[2][10];
	int a(0), b(0),c;
	cout << "Write c\n";
	cin >> c;
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 10;j++) {
			cout << "Wrtie A" << i + 1 <<"."<< j + 1 << endl;
			cin >> A[i][j];
		}
	}
	for (int i = 0;i < 10;i++) {
		if (sqrt(A[0][i] * A[0][i] + A[1][i] * A[1][i])<c) {
			cout << "Range: " << sqrt(A[0][i] * A[0][i] + A[1][i] * A[1][i]) << endl;
			}
			else {
				break;
			}
	}
}
