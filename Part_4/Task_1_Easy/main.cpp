#include<iostream>
#include<string>

using namespace std;
void Converting(const float& _versts) {
	float km = 1.0668;
	cout << _versts << "  versts = " << km * _versts << " km" << endl;
}
int main() {
	float versts;
	cout << "Please write versts" << endl;
	cin >> versts;
	Converting(versts);
	return 0;
}