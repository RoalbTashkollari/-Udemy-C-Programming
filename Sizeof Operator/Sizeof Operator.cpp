#include <iostream>
using namespace std;

int main()
{
	std::cout << "sizeof() information" << endl;

	std::cout << "=========================" << endl;
	std::cout << "char: " << sizeof(char) << " bytes" << endl;
	std::cout << "int: " << sizeof(int) << " bytes" << endl;
	std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	std::cout << "short: " << sizeof(short) << " bytes" << endl;
	std::cout << "long: " << sizeof(long) << " bytes" << endl;
	std::cout << "long long: " << sizeof(long long) << " bytes" << endl;

	std::cout << "=========================" << endl;
	std::cout << "float: " << sizeof(float) << " bytes" << endl;
	std::cout << "double: " << sizeof(double) << " bytes" << endl;
	std::cout << "long double: " << sizeof(long double) << " bytes" << endl;

	std::cout << "=========================" << endl;
	std::cout << "Minimum values: " << endl;
	std::cout << "char: " << CHAR_MIN << " bytes" << endl;
	std::cout << "int: " << INT_MIN << " bytes" << endl;
	std::cout << "short: " << SHRT_MIN << " bytes" << endl;
	std::cout << "long: " << LONG_MIN << " bytes" << endl;
	std::cout << "long long: " << LLONG_MIN << " bytes" << endl;

	std::cout << "=========================" << endl;
	std::cout << "Maximum values: " << endl;
	std::cout << "char: " << CHAR_MAX << " bytes" << endl;
	std::cout << "int: " << INT_MAX << " bytes" << endl;
	std::cout << "short: " << SHRT_MAX << " bytes" << endl;
	std::cout << "long: " << LONG_MAX << " bytes" << endl;
	std::cout << "long long: " << LLONG_MAX << " bytes" << endl;

	std::cout << "=========================" << endl;
	std::cout << "sizeof using variable names" << endl;
	int age{ 21 };
	cout << "age is " << sizeof(age) << " bytes" << endl;
	double wage{ 22.24 };
	cout << "wage is " << sizeof wage << " bytes" << endl;
}