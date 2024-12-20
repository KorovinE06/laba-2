#include<iostream>
#include<clocale>
#include<math.h>
using namespace std;
int n;
double x;

double rec(int n, double x)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return cos((2 * n - 1) * x) / (pow(2 * n - 1, 2)) + rec(n - 1, x);
	}
}
int main()
{
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter x: ";
	cin >> x;
	double su = rec(n, x);
	cout << su;
	return 0;
}