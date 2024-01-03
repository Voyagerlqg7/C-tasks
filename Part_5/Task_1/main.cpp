#include<iostream>

using namespace std;


void Get_Time(const int& _minutes) {
	int hours = _minutes / 60;
	int minutes_in_hours = _minutes % 60;
	cout << _minutes << "Its - " << hours << " hours and "
		<< minutes_in_hours << " minutes" << endl;
}
int main() {
	int minutes;
	cout << "Enter time in minutes" << endl;
	cin >> minutes;
	Get_Time(minutes);

	return 0;
}