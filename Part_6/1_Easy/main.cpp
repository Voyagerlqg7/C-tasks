#include<iostream>

using namespace std;


void Less_of_more(const int& _x, const int& _y) {
	if (_x>_y) {
		cout << _x << "more than"<< _y <<endl;
	}
	else if (_x==_y) {
		cout << "The numbers are equal" << endl;
	}
	else {
		cout << _y << "more than" << _x << endl;
	}
}
int main(){
	Less_of_more(5, 4);
	return 0;
}