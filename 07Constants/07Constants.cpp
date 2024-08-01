#include <iostream>
using namespace std;
int main()
{
	std::cout << "Hello, weocome to Frank's Carpet Cleaning Service" << endl;
	cout << "\nHow many rooms would you like to cleaned?";

	int number_small_of_rooms{ 0 };
	cout << "Enter numbers of small rooms:";
	cin >> number_small_of_rooms;

	cout << "Enter numbers of large rooms:";
	int number_large_of_rooms{ 0 };
	cin >> number_large_of_rooms;

	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 };

	const double price_per_small_room{ 25 };
	const double total_cost_small_room{ price_per_small_room * number_small_of_rooms };
	const double total_tax_small_room{ price_per_small_room * number_small_of_rooms * sales_tax };

	const double price_per_large_room{ 35 };
	const double total_cost_large_room{ price_per_large_room * number_large_of_rooms };
	const double total_tax_large_room{ price_per_large_room * number_large_of_rooms * sales_tax };

	cout << "\nEstamate for carpet cleaning serice" << endl;
	cout << "Number of small rooms: " << number_small_of_rooms << endl;
	cout << "Number of large rooms: " << number_large_of_rooms << endl;
	cout << "Price per small room $" << price_per_small_room << endl;
	cout << "Price per large room $" << price_per_large_room << endl;
	cout << "Cost:$" << total_cost_small_room + total_cost_large_room << endl;
	cout << "Tax:$" << total_tax_small_room + total_tax_large_room << endl;
	cout << "===================================" << endl;
	cout << "Total estimate:$" << total_tax_small_room + total_tax_large_room + total_cost_small_room + total_cost_large_room << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
}