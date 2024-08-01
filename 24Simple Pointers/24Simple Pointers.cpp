#include <iostream>
using namespace std;

int main()
{
	int num{ 10 };
	cout << "The value of num is: " << num << endl;
	cout << "sizeof num is: " << sizeof num<< endl;
	cout << "The adress of num is: " << &num << endl;

	int* p{};
	cout << "\nThe value of p is: " << p << endl;
	cout << "\nThe adress of p is: " << &p << endl;
 
}
