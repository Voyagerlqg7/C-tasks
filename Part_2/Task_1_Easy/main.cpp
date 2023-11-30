#include<iostream>
#include<string>

using namespace std;


void Calculation_Trip(
	int& _distance,
	float& _fuel_consumption,
	float& _price_for_liter_of_fuel
)
{
	//Расход делим на 100 км (получаем сколько литров на 1км) умножаем на дистанцию
	// после умножаем на стоимость одного литра, умножаем на 2 и получаем результат
	cout << "Round trip will cost:" << (((_fuel_consumption / 100) * _distance) * _price_for_liter_of_fuel) * 2 << "\t";
}
int main() {
	int distance = 0;
	float Fuel_consumption = 0.0;
	float price_of_fuel = 0.0;
	float Round_trip = 0.0;
	cout << "Getting calculation of distance" << "\n\n";
	cout << "Distance to the point (km)" << endl;
	cin >> distance;
	cout << "Fuel consumption (liters per 100 km)" << endl;
	cin >> Fuel_consumption;
	cout << "Price for liter of fuel(y.e)" << endl;
	cin >> price_of_fuel;
	Calculation_Trip(distance, Fuel_consumption, price_of_fuel);


	return 0;
}