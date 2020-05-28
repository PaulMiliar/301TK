#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	cout << "This program lets you to write information to first file and then rewrite it into the second one." << endl;
	string information, info;
	fstream FirstFile;//running stream
	FirstFile.open("example.txt", ios::out);//creating and opening first file in writing mode 
	if (!FirstFile.is_open())//if file does not open break with code 1
	{
		cout << "We`ve got problem with opening file. Restart your program." << endl;
		exit(1);
	}
	else{// else if it opened user would input the information into file
		cout << "Input here any word or word combination you want, but don`t use spaces." << endl;
		cin >> information;
		FirstFile << information;
	}
	FirstFile.close();//closing first file
	FirstFile.open("example.txt", ios::in);// opening first file in reading mode
	fstream SecondFile;//running second stream
	SecondFile.open("example2.txt", ios::out);//creating and opening second file in writing mode 
	if (!SecondFile.is_open())//if file does not open break with code 2
	{
		cout << "We`ve got problem with opening file. Restart your program." << endl;
		exit(2);
	}
	else {// else while we reading information symbol by symbol from the first file we will rewrite all without  numeric
		while (getline(FirstFile, info))
		{
			for (int i = 0; i < info.length(); i++)
			{
				if (!isdigit((unsigned char)info[i]))
				{
					SecondFile << info[i];
					cout << info[i];
				}
				else {
					continue;
				}
			}
		}
	}
	SecondFile.close();
	return 0;
}//end of program:)