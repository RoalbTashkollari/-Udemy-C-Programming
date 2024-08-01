#include <iostream>
using namespace std;
int main()
{
	char selection{};

	do {
		cout << "\n---------------" << endl;
		cout << "1.Do this" << endl;
		cout << "2.Do that" << endl;
		cout << "3.Do something else" << endl;
		cout << "Q.Quit" << endl;
		cout << "\nEnter your selection:";
		cin >> selection;

		if (selection == '1')
			cout << "You chose 1 - dooing this" << endl;
		else if(selection == '2')
			cout << "You chose 2 - dooing that" << endl;
		else if (selection == '3')
			cout << "You chose 3 - dooing something else" << endl;
		else if (selection == 'Q' || selection == 'q')
			cout << "Goodbye... !" << endl;
		else 
			cout << "\nInvalid selection, please chose one of the selection!" << endl;

	} while ( selection != 'q' && selection != 'Q');
;
}
