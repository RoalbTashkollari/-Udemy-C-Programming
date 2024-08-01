#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for character-based functions
using namespace std;
int main()
{
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	//cout << first_name; // Will display garbage if not initialized !!

	//cout << "Enter your first name: ";
	//cin >> first_name;


	//cout << "Enter your last name: ";
	//cin >> last_name;
	//cout << "----------------------------" << endl;

	//cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
	//cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;
	//

	//strcpy_s(full_name, first_name);
	//strcat_s(full_name, " ");
	//strcat_s(full_name, last_name);

	//cout << "Your full name is " << full_name;


	cout << "----------------------------" << endl;
	//cout << "Enter your full name: ";
	//cin >> full_name;
	//cout << "Your full name is: " << full_name; // Does not display the full name becase of ' ' character "\0".


	cout << "Enter your full name: ";
	cin.getline(full_name, 50);

	cout << "Your full name is: " << full_name << endl;


	for (size_t i{ 0 }; i < strlen(full_name); i++) {
		if (isalpha(full_name[i]))
			full_name[i] = toupper(full_name[i]);
	}
	cout << "Your full name is: " << full_name << " (uppercase)" << endl;

}
