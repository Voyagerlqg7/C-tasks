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
	//По заданию у нас может быть только два уникальных символа в строке не больше и не меньше, нужна проверка нет ли лишнего третьего, и есть ли вообще  два символа
	Check_if_there_two_symbols(word);

	char symbol_of_borders = word[0];
	int count_symbol_of_borders = 0;
	bool central = false; //Переменная для проверки есть ли вообще центральный символ
	int left_border = 0; //Левая часть\граница наших символов

	for (short int i = 0; i < word.size(); i++) {
		if (symbol_of_borders == word[i]) {
			count_symbol_of_borders++;
		}
		else {
			if (!central) {
				central = true; // Когда мы находим центральный символ, то у нас заканчивается левая граница наших символов
				left_border = count_symbol_of_borders; //В переменную left_borders мы записываем сколько символов мы имеем с левой стороны ориентируясь на счетчик
			}
			else {
				cout << "There is more than one central symbol: " << word << endl;
				return false;
			}
			// Поскольку мы в центре то мы должны обнулить счетчик,
			//после прохождения центра начнётся пересчет правой границы символов, переменная count_symbol... уже будет хранить правые границы.
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