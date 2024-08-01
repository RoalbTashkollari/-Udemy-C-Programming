#include <iostream>

// Cencts to dollar, quarter, dime, nikel, penny, converter.
using namespace std;
int main()
{
	//	All in cents
	const int dollar{ 100 };
	const int quarter{ 25 };
	const int dime{ 10 };
	const int nikel{ 5 };
	const int penny{ 1 };


	int user_input{ 0 }; // 100

	std::cout << "Enter the ammount of cents:";
	cin >> user_input;


	int ammout_of_dollars = user_input / dollar;
	user_input %= dollar;
	int ammout_of_quarters = user_input / quarter;
	user_input %= quarter;
	int ammount_of_dimes = user_input / dime;
	user_input %= dime;
	int ammout_of_nikels = user_input / nikel;
	user_input %= nikel;
	int ammount_of_pennys = user_input / penny;


	cout << "Dollars    : " << ammout_of_dollars << "\nQuarters   : " << ammout_of_quarters << "\nDimes      : " << ammount_of_dimes << "\nNikel      : " << ammout_of_nikels << "\nPenny      : " << ammount_of_pennys;
}