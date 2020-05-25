#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct flight_schedule
	{
		int number;
		string destination;
		char time[6];
	};
	const int number_of_flight = 14;
	string destination;
	flight_schedule flight[number_of_flight];

	flight[0] = { 1,"Lodz","09:00"};
	flight[1] = { 2,"Warshaw","10:00"};
	flight[2] = { 3,"Kyiv","11:00"};
	flight[3] = { 4,"Paris","12:00"};
	flight[4] = { 5,"Berlin","13:00"};
	flight[5] = { 6,"NewYork","14:00"};
	flight[6] = { 7,"Prague","15:30"};
	flight[7] = { 8,"Tokyo","16:00"};
	flight[8] = { 9,"LosAngeles","17:00"};
	flight[9] = { 10,"SanFransisco","18:00"};
	flight[10] = { 11,"Frankfurt","19:00"};
	flight[11] = { 12,"Chicago","20:00"};
	flight[12] = { 13,"Barcelona","21:00"};
	flight[13] = { 14,"Moscow","22:00"};

	cout << "Our airline has flights to such cities: Lodz, Warshaw, Kyiv, Paris, Berlin, NewYork, Prague, Tokyo, LosAngeles, SanFransisco, Frankfurt, Chicago, Barcelona, Moscow" << endl << "To check the flight table, enter the destination path." << endl << "The first letter is uppercase. Don't use space or special characters" << endl;
	char exit_or_go_on = 'Y';
	while (exit_or_go_on == 'Y' || exit_or_go_on == 'y')
	{
		cout << endl << "Input one city name (for example: Lodz, Warshaw, Kyiv, Paris, Berlin, NewYork, Prague, Tokyo, LosAngeles, SanFransisco, Frankfurt, Chicago, Barcelona, Moscow)" << endl;
		cin >> destination;
		cout << endl;
		for (int i = 0; i < number_of_flight; i++) {
			if (flight[i].destination == destination) {
				cout << "Flight id - " << flight[i].number << " Time - " << flight[i].time << endl;
			}
		}
		cout << endl << "Would you like to check another city. Type Y of y to CONTINUE, something else to EXIT " << endl;
		cin >> exit_or_go_on;
	}
	return 0;
}
