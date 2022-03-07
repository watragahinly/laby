#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	double x[5],y[5],rx[5],ry[5],k;
	cout << "Write count\n";
	cin >> k;
	int numberOfPoints(0),j(0);
	for (int i = 0; i < k; i++)
	{
		cout << "write x" << i + 1 << endl;
		cin >> x[i];
		cout << "write y" << i + 1 << endl;
		cin >> y[i];
		if ((((x[i] * x[i]) / 4) + ((y[i] * y[i]) / 1) <= 1) && ((x[i]>= 1)||(x[i] <=-1)))
		{
			numberOfPoints++;
			rx[j]=x[i];
			ry[j]=y[i];
			j++;
		}
	}
	cout << "Number of right points:" << numberOfPoints << endl;
	for (int i = 0; i < j; i++)
	{
		cout << "x" << i + 1 << "=" << rx[i] << " " << "x" << i + 1 << "=" << ry[i] << endl;
	}

	return 0;
}