#include<iostream>
#include<string>

using namespace std;


void Get_Month_Number(int& x) {
	if (x <= 2 || x == 12) {
		cout << "Its Winter" << endl;
	}
	else if (x >= 3 && x < 6) {
		cout << "Spring" << endl;
	}
	else if (x >= 6 && x < 9) {
		cout << "Summer" << endl;
	}
	else if (x >= 13) {
		cout << "FATAL ERROR: month cannot be more than 12" << endl;
	}
	else {
		cout << "Autumn" << endl;
	}
}
int main() {
	cout << "Enter any number of month" << endl;
	int data;
	cin >> data;
	Get_Month_Number(data);
	return 0;
}