#include<iostream>
#include<string>
#include <unordered_set>

using namespace std;
bool Check_if_there_two_symbols(string& word) {
	if (word.size() < 3) {
		cout << "String should have at least three symbols." << endl;
		return false;
	}
	unordered_set<char> unique_symbols;
	for (char i : word) {
		if (!unique_symbols.count(i)) {
			unique_symbols.insert(i);
		}

		if (unique_symbols.size() > 2) {
			cout << "There are more than two unique symbols in the string: " << word << endl;
			return false;
		}
	}
	return unique_symbols.size() == 2;
}
bool Count_Borders(string& word) {
	//�� ������� � ��� ����� ���� ������ ��� ���������� ������� � ������ �� ������ � �� ������, ����� �������� ��� �� ������� ��������, � ���� �� ������  ��� �������
	Check_if_there_two_symbols(word);

	char symbol_of_borders = word[0];
	int count_symbol_of_borders = 0;
	bool central = false; //���������� ��� �������� ���� �� ������ ����������� ������
	int left_border = 0; //����� �����\������� ����� ��������

	for (short int i = 0; i < word.size(); i++) {
		if (symbol_of_borders == word[i]) {
			count_symbol_of_borders++;
		}
		else {
			if (!central) {
				central = true; // ����� �� ������� ����������� ������, �� � ��� ������������� ����� ������� ����� ��������
				left_border = count_symbol_of_borders; //� ���������� left_borders �� ���������� ������� �������� �� ����� � ����� ������� ������������ �� �������
			}
			else {
				cout << "There is more than one central symbol: " << word << endl;
				return false;
			}
			// ��������� �� � ������ �� �� ������ �������� �������,
			//����� ����������� ������ ������� �������� ������ ������� ��������, ���������� count_symbol... ��� ����� ������� ������ �������.
			count_symbol_of_borders = 0;
		}
	}
	if (left_border == count_symbol_of_borders && central) { return true; }
	else { return false; }
}
bool isIceCreamSandwich(string& word) {
	if (Count_Borders(word)) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	cout << "Enter a sandwich" << endl;
	string x;
	cin >> x;
	if (isIceCreamSandwich(x)) { cout << x << "\t" << "Is a sandwich" << "\n"; }
	else { cout << x << "\t" << "Is a not sandwich" << "\n"; }


	return 0;
}