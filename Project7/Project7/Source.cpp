#include <iostream>

using namespace std;

int main()
{
	int** array;
    int* second_array, k = 0;
    int n, m;
    char key;
    while (1)
    {
        cout << endl << "Input the number of rows in array. \n  n = ";
        cin >> n;
        cout << "Input the number of columns in array \n m = ";
        cin >> m;
        if ((array = (int**)calloc(n, sizeof(int*))) == 0)//allocate memory for rows
        {
            cout << endl << "Memory allocation failure Array **array." << endl;
            exit(1);
        }
        for (int i = 0; i < n; i++)
        {
            if ((array[i] = (int*)calloc(m, sizeof(int))) == 0)//allocate memory for columns
            {
                cout << endl << "Memory allocation failure Array *array." << endl;
                exit(2);
            }
        }
        cout << "We created an array: " << endl;
        for (int i = 0; i < n; i++)//creating 2D array
        {
            for (int j = 0; j < m; j++)
            {
                array[i][j] = rand() % (n * m);//filling the array with a random number sensor
                cout.width(5);
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        if ((second_array = (int*)calloc(n * m, sizeof(int))) == 0)//allocate memory for new 1D array
        {
            cout << endl << "Memory allocation failure Array *array." << endl;
            exit(3);
        }
        //turning 2D array into 1D
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                second_array[k] = array[i][j];// filling in the new array with numbers from first one
                k++;
            }
        }
        //sorting our array with exchange method
        for (int i = 1; i < k; i++)
        {
            for (int j = k - 1; j >= i; j--)
            {
                if (second_array[j] < second_array[j - 1])
                {
                    int r = second_array[j];
                    second_array[j] = second_array[j - 1];
                    second_array[j - 1] = r;
                }
            }
        }
        //output our sorted array
        cout << endl << "Our array is sorted and presented as 1D array: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                array[i][j] = second_array[i * n + j];
                cout << array[i][j] << " ";
            }
        }
        //asking to leave the loop
        cout << endl << "Do you want to continue? If no, press 'N' or 'n' on your keyboard. If yes, press any other botton on your keyboard. \n Your answer = ";
        cin >> key;
        if (key == 'N' || key == 'n')
        {
            break;
        }
    }
    //freeing the memory we used for our arrays
    free(array);
    free(second_array);
    return 0;
}//end of program:)
