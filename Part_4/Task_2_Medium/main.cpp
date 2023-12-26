#include<iostream>
#include<string>
#include<vector>

using namespace std;
int _iterator = 0;

void arithmetic_mean(const vector<float>& _numbers) {
	float sum = 0;
	for (_iterator = 0; _iterator < _numbers.size(); _iterator++) {
		sum += _numbers[_iterator];
	}
	cout << "Arithmetic mean: " << sum / _numbers.size() << endl;
}
void Get_max(const vector<float>& _numbers) {
	float max = 0;
	for (_iterator = 0; _iterator < _numbers.size(); _iterator++) {
		if (max < _numbers[_iterator]) {
			max = _numbers[_iterator];
		}
	}
	cout << "Max: " << max << endl;
}
void Get_Min(const vector<float>& _numbers) {
	float min = _numbers[0];
	for (int i = 0; i < _numbers.size(); i++) {
		if (_numbers[i] < min) {
			min = _numbers[i];
		}
	}
	cout << "Min: " << min << endl;
}
int main() {
	int e = 0;
	cout << "Enter count of elements: ";
	cin >> e;
	vector<float> numbers(e);
	cout << endl;
	cout << "Write all elements " << endl;
	for (_iterator = 0; _iterator < e; _iterator++) {
		float j = 0;
		cout << "Element " << _iterator + 1 << ": ";
		cin >> j;
		numbers[_iterator] = j;
	}
	arithmetic_mean(numbers);
	Get_max(numbers);
	Get_Min(numbers);
	return 0;
}