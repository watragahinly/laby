#include <iostream>
using namespace std;
int main()
{
	const int N(10);
	double a[N][N],c[N];
	int n;
	cout << "Vvedite razmer\n";
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << "Write A" << i + 1 << j + 1 << endl;
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < n; ++j)
	{
		c[j] = 0;
		for (int i = 0; i < n; ++i)
			if (a[i][j])
			{
				c[j] = 1;
				break;
			}
	}
	cout << "C= ";
	for (int i = 0;i < n;i++) {
		cout << c[i]<<" ";
	}
	return 0;
}