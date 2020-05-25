#include <iostream>
using namespace std;

int main()
{
	const long int m = 5, n = 5;
	long double matrix_A[m][n];
	cout << "We have matrix A with m - columns and n - rows: " << endl;
	for(int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix_A[i][j] = i * n + j;
			cout.width(5);
			cout << matrix_A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Now we need to raise our matrix to a power 15: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix_A[i][j] = pow(matrix_A[i][j], 15);
			cout.width(15); 
			cout << matrix_A[i][j] << " ";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}