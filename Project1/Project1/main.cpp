/////find b=(1 + 1/2 + 1/2^2 + 1/2^3...+1/2^n)^n////
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	double sum = 1;
	cout << "program for solving expression b=(1 + 1/2 + 1/2^2 + 1/2^3...+1/2^n)^n" << endl;
	cout << "Input integer n" << endl << "n = ";
	cin >> n;
	for (int i = 1, v = 2; i <= n; i++, v = v << 1)
	{
		sum += (double)1 / v;
	}
	sum = pow(sum, n);
	cout << "In result we`ve got " << sum << endl;
	system("PAUSE");
	return 0;
}