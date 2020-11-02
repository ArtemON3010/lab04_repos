#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N;
	double P;
	cout << "N = "; cin >> N;
	P = 1;
	k = N;
	while (k <= 19)
	{
		P *= ((k - N) / (1. * k + N) + 1.);
		k++;
	}
	cout << P << endl;
	P = 1;
	k = N;
	do {
		P *= ((k - N) / (1. * k + N) + 1.);
		k++;
	} while (k <= 19);
	cout << P << endl;
	P = 1;
	for (k = N; k <= 19; k++)
	{
		P *= ((k - N) / (1. * k + N) + 1.);
	}
	cout << P << endl;
	P = 1;
	for (k = 19; k >= N; k--)
	{
		P *= ((k - N) / (1. * k + N) + 1.);
	}
	cout << P << endl;
	return 0;
}