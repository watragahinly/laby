#include <iostream>
using namespace std;
int main()
{
    int n;
    double S, D, Y;
    S = 0;
    D = 0;
    cout << "Write n\n";
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = rand();
        y[i] = rand();
        S += x[i];
        D += y[i];
    }
    Y = S / D;
    cout << Y;
    return 0;
}
