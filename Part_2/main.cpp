#include<iostream>
#include<string>

using namespace std;


void Calculation_Trip(
	int& _distance,
	float& _fuel_consumption,
	float& _price_for_liter_of_fuel
	) 
{
	cout << "Round trip will cost:" << "\t";
	

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
	Calculation_Trip();
	

	return 0;
}