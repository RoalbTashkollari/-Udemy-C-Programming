
#include <iostream>
using namespace std;

int main()
{
	char letter_grade{};
	cout << "Enter the letter grade you get on exam:";
	cin >> letter_grade;

	switch (letter_grade) {
	case 'a':
	case 'A':
		cout << "You need a 90 or abive, study hard!" << endl;
		break;
	case 'b':
	case 'B':
		cout << "You need a 80-89, go study !" << endl;
		break;
	case'c':
	case'C':
		cout << "You need a 70-78, for an avarage grade!" << endl;
		break;
	case 'd':
	case 'D':
		cout << "Hmm, you should try for better grade, all you need is 60-69" << endl;
		break;
	case'f':
	case'F':
		cout << "xxx" << endl;

	default:
		cout << "sory that is not valid grade";

	}

	cout << endl;
	return 0;
}
