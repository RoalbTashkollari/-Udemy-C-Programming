#include <iostream>
using namespace std;
int main()
{
	char vowels[]{ 'a','e','i','o','u'};
	cout << "\nThe first letter of vowels is: "<< vowels[0] << endl;
	cout << "The last letter of vowels is: " << vowels[4] << endl;

	//cin >> vowels[5];

	double hi_temps[]{ 90.1,89.8,77.5,81.6 };
	cout << "The first hight temlperatire is: " << hi_temps[0] << endl;
	hi_temps[0] = 100.7;
	cout << "The first hight temlperatire after change is: " << hi_temps[0] << endl;


	int test_scores[5]{100,90};
	cout << "\nScore at index 0: " << test_scores[0];
	cout << "\nScore at index 1: " << test_scores[1];
	cout << "\nScore at index 2: " << test_scores[2];
	cout << "\nScore at index 3: " << test_scores[3];
	cout << "\nScore at index 4: " << test_scores[4];

	cout << "\nEnter 5 test scores:" << endl;
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];

	cout << "\nScore at index 0: " << test_scores[0];
	cout << "\nScore at index 1: " << test_scores[1];
	cout << "\nScore at index 2: " << test_scores[2];
	cout << "\nScore at index 3: " << test_scores[3];
	cout << "\nScore at index 4: " << test_scores[4];

	cout << "\nNotice what the value of the array name is: " << test_scores << endl;
}
