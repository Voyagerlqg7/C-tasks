#include<iostream>
#include <cmath> 

using namespace std;

void GetResult(const double& x) {
	if (x == round(x)) {
		cout << "An integer is entered " << x;
	}
	else cout << "A fractional number is entered " << endl;
}
int main() {
	cout << "Enter number" << endl;
	double x;
	cin >> x;
	GetResult(x);
	return 0;
}