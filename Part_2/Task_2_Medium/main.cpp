#include<iostream>
#include<string>

using namespace std;


void Get_Discount(float& _money) {
	if (_money >= 500 && _money < 1000) {
		cout << "You will receive a 3% discount" << endl;
		float sum = (_money / 100) * 3;
		cout << "Amount due: " << _money - sum << endl;
	}
	else if (_money >= 1000) {
		cout << "You will receive a 5% discount" << endl;
		float sum = (_money / 100) * 5;
		cout << "Amount due: " << _money - sum << endl;
	}
	else {
		cout << "Unfortunately the discount is not available" << endl;
		cout << "Amount due: " << _money << endl;
	}
}
int main() {
	cout << "Enter purchase amount:" << "\t";
	float sum = 0;
	cin >> sum;
	cout << endl;
	Get_Discount(sum);
	return 0;
}