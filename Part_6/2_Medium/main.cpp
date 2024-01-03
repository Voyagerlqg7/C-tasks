#include<iostream>
#include<thread>
#include <chrono>
using namespace std;

void Wait_and_Print(const string& _text) {
	for (int i = 0; i < _text.size(); i++) {
		cout << _text[i];
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}
int main() {
	cout << "Enter the text" << endl;
	string text;
	cin >> text;
	Wait_and_Print(text);
	return 0;
}