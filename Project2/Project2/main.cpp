////find number of column and row where is min numeric////
#include <iostream>
#define SIZE 3
using namespace std;
int main()
{
	const int array[SIZE][SIZE] =
	{
		{5, 2, -8},
		{6, -1, 9},
		{-4, 7, 10}
	};
	cout << "We`ve got an array: " << endl;
	int min = array[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array[i][j] << " ";
			if (array[i][j] < min)
			{
				min = array[i][j];
			}
		}
		cout << endl;
	}
	cout << endl << "min number is = " << min << endl;
	system("PAUSE");
	return 0;
}