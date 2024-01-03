#include<iostream>

using namespace std;

void Get_cost(const float& _cost) {
	float cost_for_100g = (_cost / 1000) * 100;
	cout << "Weight(gram)" << "\t" << "Price" << endl;
	for (float j = 1, i = 100; j <= 10, i <= 1000; j++, i += 100) {
		cout << i << "\t\t" << cost_for_100g * j << endl;
	}
}
int main() {
	cout << "Enter the cost of apple for 1 kg" << endl;
	float cost_for_1kg = 0;
	cin >> cost_for_1kg;
	Get_cost(cost_for_1kg);
	return 0;
}