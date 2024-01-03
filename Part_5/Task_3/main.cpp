#include<iostream>
#include<thread>
#include <chrono>
using namespace std;

void Wait_and_Beep(const int& _sec) {
	cout << "Waiting..." << endl;
	this_thread::sleep_for(chrono::seconds(_sec));
	cout << "\a" << "Complete!" << endl;
}
int main() {
	cout << "Enter the number of seconds to wait" << endl;
	int x = 0;
	cin >> x;
	Wait_and_Beep(x);
	return 0;
}