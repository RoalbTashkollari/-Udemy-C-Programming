#include <iostream>
using namespace std;

int main()
{
	/******************
	* Character type
	*******************/
	char middle_initial{ 'J' };
	cout << "My middle initial is: " << middle_initial << endl;


	/******************
	* Integer type
	*******************/
	unsigned int exam_score{ 55 };
	cout << "My exam score was: " << exam_score << endl;

	int countries_represented{ 65 };
	cout << "Countries Represented: " << countries_represented << endl;

	long long people_on_earth{ 7'600'000'000 };
	cout << "People on earth: " << people_on_earth << endl;

	long long distance_to_alpha_centauri{ 9'461'000'000'000 };
	cout << "Distance to alpha centauri: " << distance_to_alpha_centauri << endl;


	/***********************
	* Floating point types
	************************/
	float car_payment{ 401.23f };
	cout << "Car payment: " << car_payment << endl;

	double pi{ 3.14159 };
	cout << "Pi: " << pi << endl;

	long double large_ammout{ 2.7e120 };
	cout << "Large ammout: " << large_ammout << endl;


	/******************
	* Boolean type
	*******************/
	bool game_over{ false };
	cout << "Value of gameOver: " << game_over << endl;


	/******************
	* OverFlow example
	*******************/
	short value1{ 30'000 };
	short value2{ 1000 };
	short product{ value1 * value2 };
	cout << "The summ of " << value1 << " and " << value2 << " is " << product << endl;

	return 0;
}