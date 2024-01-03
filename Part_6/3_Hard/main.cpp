#include<iostream>
#include<string>
#include<map>
#include<time.h>

using namespace std;
class Passenger{
private:
	string destination;
	string passenger_Name;
	string passenger_Surname;
	Passenger(const string& _name,
		 const string& _surname,
		 const string& _destination=) :
		passenger_Name(_name),
		passenger_Surname(_surname),
		destination(_destination)
	{

	}
}
class Ticket {
private:
	int ID_of_ticket;
	time_t date_time;
	map<int, Passenger> Data;

public:
	void Set_Ticket() {
		
	}
	void Get_Ticket() {

	}
	
}
int main() {
	 
	
	
	return 0;
}