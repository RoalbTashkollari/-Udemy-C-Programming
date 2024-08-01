#include <iostream>
using namespace std;
int main()
{
	int num{};

	cout << "Enter an integer:";
	cin >> num;

	if (num % 2 == 0)
		cout << num << " is even" << endl;
	else
		cout << num << " is odd" << endl;

	cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl;

	int x{}, y{};
	cout << "Enter 2 numbers seperated by space: ";

	cin >> x >> y;

	if (x != y) {
		cout << "The largest number is : " << (x > y ? x : y) << endl;
		cout << "The smallest number is : " << (x > y ? y : x) << endl;

	}
	else
		cout << "The numbers are the same!" << endl;

}
